using System.Text;
using System.Threading.Tasks;

namespace IncrementingAndDecrementing 
{
    class Programs
    {
        static void Main(string[] args)
        {
            int counter = 0;
            /* counter = counter + 2;
             counter = counter - 3;  // -1
             counter = counter * 3;  // -3
             counter *= 3;           // -9
             counter = counter - 5;
             counter -= 5;   // -19
            */

            counter++;
            counter--;
            counter += 2;
            counter = counter * 4;
            counter *= 4;


            Console.WriteLine(counter);
        }
    }
}
