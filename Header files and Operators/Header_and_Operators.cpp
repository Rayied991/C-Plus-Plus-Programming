
// There are two types of Header files
// 1.System Header files: It comes with the compiler
#include <iostream>
// 2.User-defined  header files: It is written by the programmer
/* #include "This.h" ->This will produce  an error if This.h is not
present in the current directory
*/

using namespace std;
int main()
{
    cout << "Operators in C++: " << endl;
    //1.Arithmetic Operators
    int a = 4, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << "The value of a+b = " << a + b << endl;
    cout << "The value of a-b = " << a - b << endl;
    cout << "The value of a*b = " << a * b << endl;
    cout << "The value of a/b = " << a / b << endl;
    cout << "The value of a%b = " << a % b << endl;
    cout << "The value of a++ = " << a++ << endl; //4
    cout << "The value of a-- = " << a-- << endl; //5
    cout << "The value of ++a = " << ++a << endl; //5
    cout << "The value of --a = " << --a << endl; //4
    cout << endl;

    //2.Assignmnt Operators -->used to assign values to variables
    ///int a =1,b=2;
    //char c='c';

    //3.Comparison operators
    //false=0; True=1
    cout << "Comparison Operators:" << endl;
    cout << "The value a==b is = " << (a == b) << endl; //0
    cout << "The value a!=b is = " << (a != b) << endl; //1
    cout << "The value a<=b is = " << (a <= b) << endl; //1
    cout << "The value a>=b is = " << (a >= b) << endl; //0
    cout << "The value a>b is = " << (a > b) << endl;   //0
    cout << "The value a<b is = " << (a < b) << endl;   //1
    cout << endl;

    //4.Logical Operators
    //&&->logical AND operator{Both will be true}
    //||-> logical OR operator{only one can be true }
    // (!)->Logical NOT Operatror{ reverse the result}
    cout << "Logical Operators:" << endl;
    cout << "The value of this logical AND operator  ((a==b) && (a<b))  is =  " << ((a == b) && (a < b)) << endl; //0
    cout << "The value of this logical OR operator  ((a==b) || (a<b))  is =  " << ((a == b) || (a < b)) << endl;  //1
    cout << "The value of this logical NOT operator  (!(a==b) )  is =  " << (!(a == b)) << endl;                  //1

    return 0;
}