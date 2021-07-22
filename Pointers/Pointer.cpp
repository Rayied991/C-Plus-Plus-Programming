#include <iostream>
using namespace std;
int main()
{
    //**************Pointers *******************

    //What is a Pointer? ----> Data type which holds the address of other datatypes

    int a = 3;
    int *b;
    b = &a; //holding the address of a

    // & --> (address of) Operator

    cout << "Address of a = " << &a << endl;
    cout << "Address of a = " << b << endl;

    //  *--> (value at) Dereference Operator
    cout << "The value at Address b = " << *b << endl;

    //Pointer to Pointer -> holds the address of a pointer

    int **c = &b; //holding the address of pointer
    cout << "The Address of b is = " << &b << endl;
    cout << "The Address of b is = " << c << endl;

    cout << "The value at address c is = " << *c << endl;
    cout << "The value at address value_at ( value_at(c)) is = " << **c << endl;

    return 0;
}