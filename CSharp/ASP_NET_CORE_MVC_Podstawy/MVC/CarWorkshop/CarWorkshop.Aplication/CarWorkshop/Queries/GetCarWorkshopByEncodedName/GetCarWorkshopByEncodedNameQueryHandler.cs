using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CarWorkshop.Domain.Interfaces;
using MediatR;
using AutoMapper;


namespace CarWorkshop.Aplication.CarWorkshop.Queries.GetCarWorkshopByEncodedName
{
    public class GetCarWorkshopByEncodedNameQueryHandler : IRequestHandler<GetCarWorkshopByEncodedNameQuery, CarWorkshopDto>
    {
        private readonly ICarWorkshopRepository carWorkshopRepository;
        private readonly IMapper mapper;

        public GetCarWorkshopByEncodedNameQueryHandler(ICarWorkshopRepository carWorkshopRepository, IMapper mapper)
        {
            this.carWorkshopRepository = carWorkshopRepository;
            this.mapper = mapper;
        }

        public async Task<CarWorkshopDto> Handle(GetCarWorkshopByEncodedNameQuery request, CancellationToken cancellationToken)
        {
            var carWorkshop = await this.carWorkshopRepository.GetByEncodedName(request.EncodedName);

            var dto = this.mapper.Map<CarWorkshopDto>(carWorkshop);

            return dto;
        }
    }
}
