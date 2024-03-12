using AutoMapper;
using CarWorkshop.Aplication.CarWorkshop;
using CarWorkshop.Domain.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarWorkshop.Aplication.Mappings
{
    public class CarWorkshopMappingProfile : Profile
    {
        public CarWorkshopMappingProfile()
        {
            CreateMap<CarWorkshopDto, Domain.Entities.CarWorkshop>()
                .ForMember(e => e.ContactDetailes, opt => opt.MapFrom(src => new CarWorkshopContactDetailes()
                {
                    City = src.City,
                    PhoneNumber = src.PhoneNumber,
                    PostalCode = src.PostalCode,
                    Street = src.Street,
                }));

            CreateMap<Domain.Entities.CarWorkshop, CarWorkshopDto>()
                .ForMember(dto => dto.Street, opt => opt.MapFrom(src => src.ContactDetailes.Street))
                .ForMember(dto => dto.City, opt => opt.MapFrom(src => src.ContactDetailes.City))
                .ForMember(dto => dto.PostalCode, opt => opt.MapFrom(src => src.ContactDetailes.PostalCode))
                .ForMember(dto => dto.PhoneNumber, opt => opt.MapFrom(src => src.ContactDetailes.PhoneNumber));
        }
    }
}
