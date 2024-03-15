using AutoMapper;
using CarWorkshop.Aplication.CarWorkshop;
using CarWorkshop.Domain.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarWorkshop.Aplication.Services
{
    public class CarWorkshopService : ICarWorkshopService
    {
        private readonly ICarWorkshopRepository carWorkshopRepository;
        private readonly IMapper mapper;

        public CarWorkshopService(ICarWorkshopRepository carWorkshopRepository, IMapper mapper)
        {
            this.carWorkshopRepository = carWorkshopRepository;
            this.mapper = mapper;
        }
        public async Task Create(CarWorkshopDto carWorkshopDto)
        {

        }

        public async Task<IEnumerable<CarWorkshopDto>> GetAll()
        {

        }
    }
}
