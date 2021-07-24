#include <iostream>
using namespace std;
class Employee
{
    int id;
    //scope->inside a class
    //lifetime->untill terminating the Faruk
    static int count /*=1000*/; //error while initializing
    //It will take memory 1 time and update everytime
    // int c;//without static

public:
    void setdata()
    {
        cout << "Enter the id:" << endl;
        cin >> id;
        count++;
        // c++;
    }
    void getdata()
    {
        cout << "The Id of the employee is: " << id << " and this is employee number = " << count << endl;
        // cout << "Old Count = " << c << endl;
    }
    static void getcount()
    {
        //only static variable can access others cannot be accessed
        // cout<<id<<endl;//will throws an error
        cout << "The value of count is = " << count << endl;
    }
};
//count is the ststic data member of the class Employee
int Employee::count; /*=1000;*/ //will not throw error
//Default value=0
int main()
{
    Employee Asif, Faruk, Fardin;
    // Asif.id=1;
    // Asif.count=1; //cannot do  id and count  are private
    //How much employee is maded we can preserved -> using static variables

    //Why use static functions?
    //if we want to create a function which can access all the static variables,only static members are accessable.
    //if we want to create a function which run using class name(not needed any object)

    //     Two properties of static functions are:
    // 1> They can access static data members only
    // 2> They can run without making any object for the class

    Asif.setdata();
    Asif.getdata();
    Employee::getcount();

    Faruk.setdata();
    Faruk.getdata();
    Employee::getcount();

    Fardin.setdata();
    Fardin.getdata();
    Employee::getcount();

    return 0;
}