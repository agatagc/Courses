using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Examples.Animals
{
    internal class Dog : Animal
    {
        public override string MakeSound()
        {
            return "Woff";
        }

        public override void Move()
        {
            Console.WriteLine($"{Name} is running");
        }

        public void Fetch()
        {
            Console.WriteLine("Fetch");
        }
    }
}
