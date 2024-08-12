using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Examples.Animals
{
    internal class Cat : Animal
    {
        public override string MakeSound()
        {
            return "Meow";
        }

        public override void Move()
        {
            Console.WriteLine($"{Name} is walking");
        }

        public void Purr()
        {
            Console.WriteLine("Purr...");
        }
    }
}
