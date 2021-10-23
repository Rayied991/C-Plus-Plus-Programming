using System;

namespace AS_IS_Operator
{
    class Program
    {
        static void Main(string[] args)
        {
            string s1 = "OOP2";
            var v1 = s1 as string;
            Console.WriteLine(v1);

            var v2 = s1 is string;
            Console.WriteLine(v2);

            var v3 = s1 is int;
            Console.WriteLine(v3);

            Console.ReadKey();
        }
    }
}
