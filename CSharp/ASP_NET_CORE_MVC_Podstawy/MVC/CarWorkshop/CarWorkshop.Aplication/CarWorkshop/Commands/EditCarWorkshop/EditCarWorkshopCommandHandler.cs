using CarWorkshop.Domain.Interfaces;
using MediatR;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarWorkshop.Aplication.CarWorkshop.Commands.EditCarWorkshop
{
    internal class EditCarWorkshopCommandHandler : IRequestHandler<EditCarWorkshopCommand>
    {
        private readonly ICarWorkshopRepository repository;

        public EditCarWorkshopCommandHandler(ICarWorkshopRepository repository)
        {
            this.repository = repository;
        }

        public async Task<Unit> Handle(EditCarWorkshopCommand request, CancellationToken cancellationToken)
        {
            Domain.Entities.CarWorkshop carWorkshop = await this.repository.GetByEncodedName(request.EncodedName!);

            carWorkshop.Description = request.Description;
            carWorkshop.About = request.About;

            carWorkshop.ContactDetailes.City = request.City;
            carWorkshop.ContactDetailes.PhoneNumber = request.PhoneNumber;
            carWorkshop.ContactDetailes.PostalCode = request.PostalCode;
            carWorkshop.ContactDetailes.Street = request.Street;

            await this.repository.Commit();

            return Unit.Value;
        }
    }
}
