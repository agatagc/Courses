using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AutoMapper;
using CarWorkshop.Domain.Interfaces;
using MediatR;

namespace CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop
{
    public class CreateCarWorkshopCommandHandler : IRequestHandler<CreateCarWorkshopCommand>

    {
        private readonly ICarWorkshopRepository carWorkshopRepository;
        private readonly IMapper mapper;

        public CreateCarWorkshopCommandHandler(ICarWorkshopRepository carWorkshopRepository, IMapper mapper)
        {
            this.carWorkshopRepository = carWorkshopRepository;
            this.mapper = mapper;
        }

        public async Task<Unit> Handle(CreateCarWorkshopCommand request, CancellationToken cancellationToken)
        {
            var carWorkshop = this.mapper.Map<Domain.Entities.CarWorkshop>(request);

            carWorkshop.EncodeName();

            await this.carWorkshopRepository.Create(carWorkshop);

            return Unit.Value;
        }
    }
}
