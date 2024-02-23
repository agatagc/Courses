using CarWorkshop.Infrastructure.Persistence;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CarWorkshop.Infrastructure.Seeders
{
    public class CarWorkshopSeeder
    {
        private readonly CarWorkshopDbContext dbContext;

        public CarWorkshopSeeder(CarWorkshopDbContext dbContext)
        {
            this.dbContext = dbContext;
        }

        public async Task Seed() 
        { 
            if (await dbContext.Database.CanConnectAsync())
            {
                if (!dbContext.CarWorkshops.Any())
                {
                    var mazdaAso = new Domain.Entities.CarWorkshop()
                    {
                        Name = "Mazda ASO",
                        Description = "Mazda authorized service",
                        ContactDetailes = new()
                        {
                            City = "Warsaw",
                            Street = "Marszałkowska",
                            PostalCode = "20-060",
                            PhoneNumber = "+48-123-456-789",
                        }
                    };
                    mazdaAso.EncodeName();
                    dbContext.CarWorkshops.Add(mazdaAso);
                    await dbContext.SaveChangesAsync();
                }
            }
        }
    }
}
