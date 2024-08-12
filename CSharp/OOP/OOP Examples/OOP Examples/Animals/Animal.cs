using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Examples.Animals
{
    public abstract class Animal
    {
        public required string Name { get; set; }
        public required float Weight { get; set; }

        public abstract string MakeSound();

        public virtual void Move()
        {
            Console.WriteLine($"{Name} is moving");
        }
    }
}
