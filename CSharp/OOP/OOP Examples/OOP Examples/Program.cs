using OOP_Examples.Animals;
using System;

public class Program
{
    public static void Main(string[] args)
    {
        List<Animal> animals = new List<Animal>();

        Cat fiona = new Cat()
        {
            Name = "Fiona",
            Weight = 6.5f
        };

        Animal dudi = new Cat() 
        {
            Name = "Dudi", 
            Weight = 4.5f 
        };

        Bird mike = new Bird()
        {
            Name = "Mike",
            Weight = 0.534f
        };

        Dog nazar = new Dog()
        {
            Name = "Nazar",
            Weight = 21.5f
        };

        fiona.Purr();
        nazar.Fetch();
        //dudi.Purr(); // Won't work becaouse dudi is instansiated only as Animal

        animals.AddRange([fiona, dudi, mike, nazar]);

        DisplayAnimals(animals);
        MoveAnimals(animals);
        MakeSoundAnimals(animals);
    }

    public static void DisplayAnimals(List<Animal> animals)
    {
        foreach (Animal animal in animals) 
        {
            Console.WriteLine($"Animal {animal.Name} weights {animal.Weight}");
        }
    }

    public static void MoveAnimals(List<Animal> animals)
    {
        foreach (Animal animal in animals)
        {
            animal.Move();
        }
    }

    public static void MakeSoundAnimals(List<Animal> animals)
    {
        foreach (Animal animal in animals)
        {
            animal.MakeSound();
        }
    }
}