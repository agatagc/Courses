using CarWorkshop.Aplication.CarWorkshop.Queries.GetAllCarWorkshops;
using Microsoft.AspNetCore.Mvc;
using CarWorkshop.Aplication.CarWorkshop;
using MediatR;
using CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop;
using CarWorkshop.Aplication.CarWorkshop.Queries.GetCarWorkshopByEncodedName;


namespace CarWorkshop.MVC.Controllers
{
    public class CarWorkshopController : Controller
    {
        private readonly IMediator mediator;

        public CarWorkshopController(IMediator mediator)
        {
            this.mediator = mediator;
        }

        public async Task<IActionResult> Index()
        {
            var carWorkshops = await this.mediator.Send(new GetAllCarWorkshopsQuery());
            return View(carWorkshops);
        }

        public IActionResult Create()
        {
            return View();
        }

        [Route("CarWorkshop/{encodedName}/Details")]
        public async Task<IActionResult> Details(string encodedName)
        {
            var dto = await this.mediator.Send(new GetCarWorkshopByEncodedNameQuery(encodedName));
            return View(dto);
        }


        [HttpPost]
        public async Task<IActionResult> Create(CreateCarWorkshopCommand command)
        {
            if (!ModelState.IsValid) 
            {
                return View(command);
            }

            await this.mediator.Send(command);
            return RedirectToAction(nameof(Index));            
        }
    }
}
