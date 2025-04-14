using Constructors;

namespace CSharpIntermediate
{
    class Program
    {
        static void Main(string[] args)
        {
            var customer = new Customer();
            Console.WriteLine(customer.ID);
            Console.WriteLine(customer.Name);
            

        }
    }
}