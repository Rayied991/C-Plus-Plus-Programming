#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId()
    {

        cout << "Enter id of employee:" << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "The id of  the employee is: " << id << endl;
    }
};
int main()
{
    // Employee Asif, fardin, faruk;

    // Asif.setId();
    // Asif.getid();
    //If employee is too much like=200
    Employee fb[4]; //Array of objects
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getid();
    }

    return 0;
}