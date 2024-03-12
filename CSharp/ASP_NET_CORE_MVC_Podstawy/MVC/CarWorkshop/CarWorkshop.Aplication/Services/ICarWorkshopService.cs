using CarWorkshop.Aplication.CarWorkshop;

namespace CarWorkshop.Aplication.Services
{
    public interface ICarWorkshopService
    {
        Task Create(CarWorkshopDto carWorkshop);
        Task<IEnumerable<CarWorkshopDto>> GetAll();
    }
}