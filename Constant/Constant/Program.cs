using System;

namespace Constant
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 10;
            Console.WriteLine("Before Update = "+a);
            a = 20;
            Console.WriteLine("After Update = " + a);

            const int b = 25;
            Console.WriteLine("No update of constant  variable = " + b);
            //b = 34;//error
            int c = a + b;
            Console.WriteLine("Sum = " + c);

            //Nid Card
            const int nidage = 18;
            int age=17;
            if (age >= nidage)
            {
                Console.WriteLine("You are applicable for Nid");
            }
            else
            {
                Console.WriteLine("You are not Applicable for Nid");
            }

            Console.ReadKey();
        }
    }
}
