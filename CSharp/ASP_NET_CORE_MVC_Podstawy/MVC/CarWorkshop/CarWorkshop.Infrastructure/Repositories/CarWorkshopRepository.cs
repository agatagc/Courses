using CarWorkshop.Domain.Interfaces;
using CarWorkshop.Infrastructure.Persistence;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarWorkshop.Infrastructure.Repositories
{
    internal class CarWorkshopRepository : ICarWorkshopRepository
    {
        private readonly CarWorkshopDbContext dbContext;

        public CarWorkshopRepository(CarWorkshopDbContext dbContext)
        { 
            this.dbContext = dbContext;
        }

        public async Task Create(Domain.Entities.CarWorkshop carWorkshop)
        {
            this.dbContext.Add(carWorkshop);
            await this.dbContext.SaveChangesAsync();
        }

        public async Task<IEnumerable<Domain.Entities.CarWorkshop>> GetAll()
            => await this.dbContext.CarWorkshops.ToListAsync();

        public async Task<Domain.Entities.CarWorkshop> GetByEncodedName(string encodedName)
        => await this.dbContext.CarWorkshops.FirstAsync(c => c.EncodedName == encodedName);

        public Task<Domain.Entities.CarWorkshop?> GetByName(string name)
            => this.dbContext.CarWorkshops.FirstOrDefaultAsync(c => c.Name.ToLower() == name.ToLower());
    }
}
 