using System.Text;
using System.Threading.Tasks;

namespace Konsola
{

    class Programs
    {
        static void Main(string[] args)
        {
            // Przykład 1 

             string infoText = "W loterii wygrywa numer: ";
             int number = 12;

             //Console.WriteLine(infoText + number);
             //Console.ReadKey();
            
            // Przykład 2
            string carName = "Volvo";
            int productionYear = 2013;
            int year = 2022;

            // wyświetlamy zdanie "Moje auto nazwa ma x lat. 

            //Console.WriteLine("Moje auto " + carName + " ma " + (year - productionYear) + " lat.");
            //Console.ReadKey();


            // Przykład 3 

            int num1 = 23;
            int num2 = 6;

            Console.WriteLine(num1 + " + " + num2 + " = ");
            Console.WriteLine("Wynik wynosi: " + (num1 + num2));
            Console.ReadKey();
        }+
    }
}
