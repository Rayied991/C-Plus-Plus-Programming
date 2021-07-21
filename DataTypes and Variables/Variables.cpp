#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    //declaring variables
    //int=4 bytes space
    //float=4 bytes
    //double=8 bytes
    //long double(10 bytes varies compiler to compiler)
    int age = 10;
    cout << "Age is=" << age << endl;
    signed int x;
    //signed int = it can include both positive and negative values
    signed x1;
    unsigned int z;
    //for positive int=unsigned
    //when you have only int, then by default it is signed
    double rate_of_interest = 0.07; //intialization and declaration
    double roi{0.07};               //another way of declaring and initialization variable
     int var {};//assigning var=0
    cout << "Rate of interest: " << roi << endl;

    auto myVar = 9.5; //Automatically initializes the variable by compiler
    auto myInt = 10;  //type=int
    auto ptr = &myVar;

    cout << "Type of myVar= " << typeid(myVar).name() << endl; //it returns the type of the variable
    cout << "Type of myInt= " << typeid(myInt).name() << endl;
    cout << "Type of ptr= " << typeid(ptr).name() << endl;

    // auto a;//this line will give error
    //because a is not initialized  at the time of declaration

    return 0;
}