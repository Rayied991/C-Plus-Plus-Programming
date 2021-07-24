#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //below line maeans that non member -> sumcomplex function is allowed  to do anything with my private parts(members)
    friend Complex sumComplex(Complex o1, Complex o2); //friend function
    // A friend function is defined as a function that can access private, protected and public members of a class
    void print()
    {
        cout << "Your number is = " << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    // cout<<a;//error
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setnumber(1, 4);
    // c1.sumComplex(1,6);->error occured
    c1.print();
    c2.setnumber(5, 8);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();

    return 0;
}

/*Properties of Friend functions
  1.Not in the scope of the class
  2. since it is not in the scope of the class, it cannot be called from the object  of that class. c1.sumcomplex()=invalid.
  3. can be invoked  without the help of  any objects
  4.usually contains  the objects as arguments 
  5. can be declared inside public or private section of the class
  6. It cannot access the members directly by their names  and need object_name.member_name to access any member.


*/
