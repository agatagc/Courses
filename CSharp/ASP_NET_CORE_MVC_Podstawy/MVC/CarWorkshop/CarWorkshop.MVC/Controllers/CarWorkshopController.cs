using CarWorkshop.Aplication.Services;
using Microsoft.AspNetCore.Mvc;
using CarWorkshop.Aplication.CarWorkshop;

namespace CarWorkshop.MVC.Controllers
{
    public class CarWorkshopController : Controller
    {
        private readonly ICarWorkshopService carWorkshopService;

        public CarWorkshopController(ICarWorkshopService carWorkshopService)
        {
            this.carWorkshopService = carWorkshopService;
        }
        public async Task<IActionResult> Index()
        {
            var carWorkshops = await this.carWorkshopService.GetAll();
            return View(carWorkshops);
        }

        public IActionResult Create()
        {
            return View();
        }

        [HttpPost]
        public async Task<IActionResult> Create(CarWorkshopDto carWorkshop)
        {
            if (!ModelState.IsValid) 
            {
                return View(carWorkshop);
            }

            await this.carWorkshopService.Create(carWorkshop);
            return RedirectToAction(nameof(Create));            //TODO: refactor 
        }
    }
}
