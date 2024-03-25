using CarWorkshop.Aplication.CarWorkshop.Queries.GetAllCarWorkshops;
using Microsoft.AspNetCore.Mvc;
using CarWorkshop.Aplication.CarWorkshop;
using MediatR;
using CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop;
using CarWorkshop.Aplication.CarWorkshop.Queries.GetCarWorkshopByEncodedName;
using CarWorkshop.Aplication.CarWorkshop.Commands.EditCarWorkshop;
using AutoMapper;


namespace CarWorkshop.MVC.Controllers
{
    public class CarWorkshopController : Controller
    {
        private readonly IMediator mediator;
        private readonly IMapper mapper;

        public CarWorkshopController(IMediator mediator, IMapper mapper)
        {
            this.mediator = mediator;
            this.mapper = mapper;
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
            CarWorkshopDto dto = await this.mediator.Send(new GetCarWorkshopByEncodedNameQuery(encodedName));
            return View(dto);
        }

        [Route("CarWorkshop/{encodedName}/Edit")]
        public async Task<IActionResult> Edit(string encodedName)
        {
            CarWorkshopDto dto = await this.mediator.Send(new GetCarWorkshopByEncodedNameQuery(encodedName));
            EditCarWorkshopCommand model = this.mapper.Map<EditCarWorkshopCommand>(dto);

            return View(model);
        }

        [HttpPost]
        [Route("CarWorkshop/{encodedName}/Edit")]
        public async Task<IActionResult> Edit(string encodedName, EditCarWorkshopCommand command)
        {
            if (!ModelState.IsValid) 
            {
                return View(command);
            }

            await this.mediator.Send(command);
            return RedirectToAction(nameof(Index));            
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
