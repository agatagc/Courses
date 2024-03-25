using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using AutoMapper;
using CarWorkshop.Domain.Interfaces;
using MediatR;
using CarWorkshop.Aplication.ApplicationUser;

namespace CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop
{
    public class CreateCarWorkshopCommandHandler : IRequestHandler<CreateCarWorkshopCommand>

    {
        private readonly ICarWorkshopRepository carWorkshopRepository;
        private readonly IMapper mapper;
        private readonly IUserContext userContext;

        public CreateCarWorkshopCommandHandler(ICarWorkshopRepository carWorkshopRepository, IMapper mapper, IUserContext userContext)
        {
            this.carWorkshopRepository = carWorkshopRepository;
            this.mapper = mapper;
            this.userContext = userContext;
        }

        public async Task<Unit> Handle(CreateCarWorkshopCommand request, CancellationToken cancellationToken)
        {
            var carWorkshop = this.mapper.Map<Domain.Entities.CarWorkshop>(request);

            carWorkshop.EncodeName();

            carWorkshop.CreateById = this.userContext.GetCurrentUser().Id;

            await this.carWorkshopRepository.Create(carWorkshop);

            return Unit.Value;
        }
    }
}
