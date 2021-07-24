#include <iostream>
using namespace std;
//In structure -> Data hiding not available(data will never be protected)
//The data are directly accessed from anywhere in the program
//Structure is not safe
//In structure we cannot include functions
//In class we can include function in a convenient way.
//Better from structure to model Real world scenario we use classes

class Employee
{
    //Access Specifiers
private:         //( Functions are accessable only)
    int a, b, c; //Private

public:
    int d, e; //Public
    //functions can be implemented intially or after
    void setdata(int a1, int b1, int c1); //Declaration
    void getdata()
    {
        cout << "The value of a is = " << a << endl;
        cout << "The value of b is = " << b << endl;
        cout << "The value of c is = " << c << endl;
        cout << "The value of d is = " << d << endl;
        cout << "The value of e is = " << e << endl;
    }
};
void Employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee Asif;
    // private access modifiers; So,cannot access directly;Accessed by functions
    // Asif.a=11;//This will throw error  as a is private
    // Asif.b=11;//This will throw error as b is private
    // Asif.c=11;//This will throw error as c is private
    Asif.d = 1200; //This will not throw error  as d is private
    Asif.e = 11;   //This will not throw error as e is private
    Asif.setdata(1, 2, 4);
    Asif.getdata();

    return 0;
}