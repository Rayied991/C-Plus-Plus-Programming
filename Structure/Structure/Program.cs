using System;

namespace Structure
{
    class Program
    {
        struct Box
        {
            public int height;
            public int width; 

            public Box(int h,int w)
            {
                Console.WriteLine("Parameterized Constructor called");
                height = h;
                width = w;
            }
        }
        static void Main(string[] args)
        {
            //Without Assigning using new keyword
            Box b1 = new Box();
            Console.WriteLine(b1.height);
            Console.WriteLine(b1.width);

            //Without new keyword

            Box b2;
            b2.height = 11;
            b2.width = 23;
            Console.WriteLine(b2.height);
            Console.WriteLine(b2.width);

            //Parameterized Constructor
            Box b3 = new Box(2, 3);
            Console.WriteLine(b3.height);
            Console.WriteLine(b3.width);

            Console.ReadKey();
           
        }
    }
}
