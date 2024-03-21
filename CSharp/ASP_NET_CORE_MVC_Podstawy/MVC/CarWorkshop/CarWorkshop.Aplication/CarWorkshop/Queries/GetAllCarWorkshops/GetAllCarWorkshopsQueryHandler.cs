using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AutoMapper;
using CarWorkshop.Domain.Interfaces;
using MediatR;

namespace CarWorkshop.Aplication.CarWorkshop.Queries.GetAllCarWorkshops
{
    public class GetAllCarWorkshopsQueryHandler : IRequestHandler<GetAllCarWorkshopsQuery, IEnumerable<CarWorkshopDto>>
    {
        private readonly ICarWorkshopRepository carWorkshopRepository;
        public IMapper Mapper { get; }

        public GetAllCarWorkshopsQueryHandler(ICarWorkshopRepository carWorkshopRepository, IMapper mapper)
        {
            this.carWorkshopRepository = carWorkshopRepository;
            this.Mapper = mapper;
        }

        public  async Task<IEnumerable<CarWorkshopDto>> Handle(GetAllCarWorkshopsQuery request, CancellationToken cancellationToken)
        {
            var carWorkshops = await this.carWorkshopRepository.GetAll();
            var dtos = this.Mapper.Map<IEnumerable<CarWorkshopDto>>(carWorkshops);

            return dtos;
        }
    }
}
