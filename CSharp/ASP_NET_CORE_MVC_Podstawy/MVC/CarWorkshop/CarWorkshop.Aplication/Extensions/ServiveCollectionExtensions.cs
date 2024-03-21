using CarWorkshop.Aplication.CarWorkshop.Commands.CreateCarWorkshop;
using CarWorkshop.Aplication.Mappings;
using FluentValidation;
using FluentValidation.AspNetCore;
using Microsoft.Extensions.DependencyInjection;
using MediatR;

namespace CarWorkshop.Aplication.Extensions
{
    public static class ServiceCollectionExtension
    {
        public static void AddAplication(this IServiceCollection services)
        {
            services.AddMediatR(typeof(CreateCarWorkshopCommand));

            services.AddAutoMapper(typeof(CarWorkshopMappingProfile));

            services.AddValidatorsFromAssemblyContaining<CreateCarWorkshopCommandValidator>()
                .AddFluentValidationAutoValidation()
                .AddFluentValidationClientsideAdapters();
        }
    }
}
