﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOP_Examples.Animals
{
    internal class Bird : Animal
    {
        public override string MakeSound()
        {
            return "Quack";
        }

        public override void Move()
        {
            Console.WriteLine($"{Name} is flying");
        }
    }
}