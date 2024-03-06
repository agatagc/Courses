using CarWorkshop.Aplication.CarWorkshop;
using CarWorkshop.Aplication.Mappings;
using CarWorkshop.Aplication.Services;
using FluentValidation;
using FluentValidation.AspNetCore;
using Microsoft.Extensions.DependencyInjection;

namespace CarWorkshop.Aplication.Extensions
{
    public static class ServiceCollectionExtension
    {
        public static void AddAplication(this IServiceCollection services)
        {
            services.AddScoped<ICarWorkshopService, CarWorkshopService>();

            services.AddAutoMapper(typeof(CarWorkshopMappingProfile));

            services.AddValidatorsFromAssemblyContaining<CarWorkshopDtoValidator>()
                .AddFluentValidationAutoValidation()
                .AddFluentValidationClientsideAdapters();
        }
    }
}
