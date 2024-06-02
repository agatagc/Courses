using Microsoft.AspNetCore.Mvc;

namespace ConsoleToWebAPI.Controllers
{
    [ApiController]
    [Route("[controller]/[action]")]
    public class TestController : ControllerBase
    {
        [HttpGet]
        public ActionResult<string> DisplayMessage() 
        {
            return "Hello";
        }

        [HttpGet]
        public ActionResult<string> DisplayMessage2()
        {
            return "Hello 2";
        }
    }
}
