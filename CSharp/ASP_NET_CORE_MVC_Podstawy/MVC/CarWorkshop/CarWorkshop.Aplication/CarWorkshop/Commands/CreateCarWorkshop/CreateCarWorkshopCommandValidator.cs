﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CarWorkshop.Domain.Interfaces;
using FluentValidation;

namespace CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop
{
    public class CreateCarWorkshopCommandValidator : AbstractValidator<CreateCarWorkshopCommand>
    {
        public CreateCarWorkshopCommandValidator(ICarWorkshopRepository repository)
        {
            RuleFor(c => c.Name)
                .NotEmpty()
                .MinimumLength(2).WithMessage("Name should have atleast 2 characters")
                .MaximumLength(20).WithMessage("Name should have maxium od 20 characters")
                .Custom((value, context) =>
                {
                    var existingCarWorkshop = repository.GetByName(value).Result;

                    if (existingCarWorkshop != null)
                    {
                        context.AddFailure($"{value} is nolt a unique name for car workshop");
                    }
                });

            RuleFor(c => c.Description)
                .NotEmpty().WithMessage("Please enter description");

            RuleFor(c => c.PhoneNumber)
                .MinimumLength(8)
                .MaximumLength(12);
        }
    }
}
