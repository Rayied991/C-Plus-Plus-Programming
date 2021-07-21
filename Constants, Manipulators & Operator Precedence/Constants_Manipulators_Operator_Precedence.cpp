#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 34;
    char c = 'd';
    cout << "The value of a was = " << a << " and the value of c was= " << c << endl;
    a = 45;
    c = '5';
    cout << "The value of a is = " << a << " and the value of c is= " << c << endl;

    //sometimes in our program we don't want to change the value
    //if we don't want the value to be changed then we can use constant in c++

    //********************Constants***********************
    //constant-> read only variable
    const int b = 123; //cannot be changed
    cout << "The value of b is = " << b << endl;
    // b = 34; //error occured because b is a constant
    // cout << "The value of b is = " << b << endl;
    const float b1 = 123.99; //cannot be changed
    cout << "The value of b1 is = " << b1 << endl;

    //*************** Manipulators in C++ *********************
    //Helps in data display for formatting
    //Commonly used Manipulators are= endl,setw(inside <iomanip>)
    //and another is in <iomanip> header library
    //setw-> helps setting the field width

    int x = 3, y = 78, z = 1233;
    cout << "The value of x without setw is = " << x << endl;
    cout << "The value of y without setw is = " << y << endl;
    cout << "The value of z without setw is = " << z << endl;

    cout << "The value of x using setw is = " << setw(4) << x << endl;
    cout << "The value of y using setw is = " << setw(4) << y << endl;
    cout << "The value of z using setw is = " << setw(4) << z << endl;

    //************** Operator Precedence in C++ *****************
    //In a expression 1st which operator will resolve
    int a2 = 3, b2 = 4;
    int c1 = (a2 * 5) + b2;                 // (*>+) 1.(*) 2.(+)
    int c2 = ((((a2 * 5) + b2) - 45) + 87); //(+ and -)->Equal Precedence Associativity=(left to right)
    //When Precedence is equal then we will check Associativity
    //Associativity can be (left to right) or (right  to left)
    cout << c1 << endl;
    cout << c2 << endl;

    return 0;
}