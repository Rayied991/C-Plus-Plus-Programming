using System;

namespace Enumeration
{
    class Program
    {
        enum Days
        {
            Sunday,
            Monday,
            Tuesday,
            Wednesday,
            Thursday,
            Friday,
            Saturday

        }
        enum Days2
        {
            Sunday,
            Monday,
            Tuesday=15,
            Wednesday,
            Thursday,
            Friday,
            Saturday
        }
        static void Main(string[] args)
        {
            Days d = Days.Sunday;
            Console.WriteLine(d);
            //Knowing the number of Sunday
            int a = (int)d;//(enum is larger than int type)
            Console.WriteLine("The value of Sunday = " + a);
            int b = (int)Days.Thursday;
            Console.WriteLine("The value of Thursday = " + b);

            Days2 d2 = Days2.Thursday;
            Console.WriteLine("Thursday value assigned = " + d2);

            Days dd = Days.Thursday;
            switch (dd)
            {
                case Days.Sunday:
                    Console.WriteLine("ClassDay");
                    break;
                case Days.Monday:
                    Console.WriteLine("Lab Class Day");
                    break;
                case Days.Thursday:
                    Console.WriteLine("Usually No class");
                    break;
                default:
                    Console.WriteLine("Weekend");
                    break;
            }
            Console.ReadKey();
        }
    }
}
