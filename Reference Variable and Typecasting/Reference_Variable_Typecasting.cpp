#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // ********************Build in Datatypes************************
    int a, b, c;
    // User Input
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "Sum is = " << c << endl;
    cout << "The global variable -> c is= " << ::c << endl; //Printing the gloval variable
    //::->scope resolution operator
    //by default scope is local

    //   ********************float ,double and long double Literals********************
    //34.4f/F->floating point number{without literals it is considered as double point}
    //34.4d/D-> double point number
    //34.4l/L->long double point
    float d = 34.4f;
    long double e = 34.4l;
    cout << "The size of 34.4 is = " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is = " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is = " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is = " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is = " << sizeof(34.4L) << endl;

    cout << "The value of d is = " << d << " and The value of e is = " << e << endl;

    //***************************Reference Variables**********************************
    // Alif(Dad Says)-> Imtiaz(Mom says)-> Alu(Neighbor's says)-->pro Coder(Say to himself)-> But he is only one Person
    //Rohan-> Monty(Dad Says)-> Rohu(school friends says)->Dangerous Coder(Say to himself)-> But he is only one Person

    //we want to call a value from two different different values, pointing to different references in same value-> in here we use reference variables
    float x = 455; //Original Variable
    float &y = x;  /// y-> reference variable which is pointing to x
    cout << "X = " << x << " and Y = " << y << endl;

    //****************************Typecasting*****************************
    //casting one variable type into another variable
    int a1 = 45;
    float b1 = 45.46;
    cout << "The value of a1 = " << (float)a1 << endl;
    cout << "The value of a1 = " << float(a1) << endl;
    cout << "The value of a1 = " << (int)b1 << endl;
    cout << "The value of a1 = " << int(b1) << endl;
    int c1 = int(b1);

    cout << "The expression is = " << a1 + b1 << endl;      //90.46
    cout << "The expression is = " << a1 + int(b1) << endl; //90
    cout << "The expression is = " << a1 + (int)b1 << endl; //90

    return 0;
}