using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp
{

    class Programs
    {
        static void Main(string[] args)
        {
           

            Console.WriteLine("Podaj swoje imię: ");
            string userInput = Console.ReadLine();
            Console.WriteLine("Cześć " + userInput);
            Console.ReadKey();
        }
    }
}

