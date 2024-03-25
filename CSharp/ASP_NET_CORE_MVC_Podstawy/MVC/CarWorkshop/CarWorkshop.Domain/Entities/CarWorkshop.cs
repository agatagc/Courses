using Microsoft.AspNetCore.Identity;

namespace CarWorkshop.Domain.Entities
{
    public class CarWorkshop
    {
        public int Id { get; set; }
        public string Name { get; set; } = default!;
        public string? Description { get; set; }
        public DateTime CreatedAt { get; set; } = DateTime.UtcNow;
        public CarWorkshopContactDetailes ContactDetailes { get; set; } = default!;

        public string? About { get; set; }

        public string? CreateById { get; set; }
        public IdentityUser? CreateBy { get; set; }

        public string EncodedName { get; private set; } = default!;

        public void EncodeName() => EncodedName = Name.Replace(" ", "-").ToLower();
    }
}
