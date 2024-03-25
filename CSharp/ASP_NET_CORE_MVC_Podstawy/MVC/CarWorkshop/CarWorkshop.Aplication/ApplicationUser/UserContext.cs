using Microsoft.AspNetCore.Http;
using System.Security.Claims;

namespace CarWorkshop.Aplication.ApplicationUser
{
    public interface IUserContext
    {
        CurrentUser GetCurrentUser();
    }

    public class UserContext : IUserContext
    {
        private readonly IHttpContextAccessor httpContextAccessor;

        public UserContext(IHttpContextAccessor httpContextAccessor)
        {
            this.httpContextAccessor = httpContextAccessor;
        }

        public CurrentUser GetCurrentUser()
        {
            ClaimsPrincipal? user = httpContextAccessor?.HttpContext?.User;

            if (user is null)
            {
                throw new InvalidOperationException("Context user is not present");
            }

            string id = user.FindFirst(c => c.Type == ClaimTypes.NameIdentifier)!.Value;
            string email = user.FindFirst(c => c.Type == ClaimTypes.Email)!.Value;

            return new CurrentUser(id, email);
        }
    }
}
