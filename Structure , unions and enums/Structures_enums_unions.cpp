#include <iostream>
using namespace std;
//Structure-> User defined datatype
//used for combining different items(int,float,double.....)
//Array used for combining same items

typedef struct Employee
{
    /* data */
    int Eid;      //4
    char favchar; //1
    float salary; //4
    //Total 9 bytes
    string profession;
} ep;

//User defined datatype where items are made with different dataypes then we use structure

//union
//union's are just like structure but they provide better memory management

union Money
{
    /* data */
    //from these three we can use at a time one items
    //we set rice then we cannot set car and pounds
    int rice;     //4
    char car;     //1
    float pounds; //4
    //we want to use only one, then we choose maximum amount of memory which had
};

//if we want to use only one types of data then we can use unions( memory optimise by yourself)
//better memory management provides by union

int main()
{
    //********Structures in C++ ****************
    ep Asif;   //Employee created=Asif
    ep Fardin; //Employee created=Fardin
    ep Imtiaz; //Employee created=Imtiaz
    Asif.Eid = 1;
    Asif.favchar = 'c';
    Asif.salary = 120000;
    Asif.profession = " Web Developer";

    Fardin.Eid = 2;
    Fardin.favchar = 'f';
    Fardin.salary = 200000;
    Fardin.profession = "Civil Engineer";

    Imtiaz.Eid = 3;
    Imtiaz.favchar = 'I';
    Imtiaz.salary = 300000;
    Imtiaz.profession = "Network Specialist";

    cout << "Id of asif = " << Asif.Eid << endl;
    cout << "Favchar of asif = " << Asif.favchar << endl;
    cout << "Salary of asif = " << Asif.salary << endl;
    cout << "Profession of asif = " << Asif.profession << endl;

    cout << "Id of Fardin = " << Fardin.Eid << endl;
    cout << "Favchar of Fardin = " << Fardin.favchar << endl;
    cout << "Salary of Fardin = " << Fardin.salary << endl;
    cout << "Profession of Fardin = " << Fardin.profession << endl;

    cout << "Id of Imtiaz = " << Imtiaz.Eid << endl;
    cout << "Favchar of Imtiaz = " << Imtiaz.favchar << endl;
    cout << "Salary of Imtiaz = " << Imtiaz.salary << endl;
    cout << "Profession of Imtiaz = " << Imtiaz.profession << endl;

    //***********Unions in C++ ********************
    union Money m1;
    m1.rice = 34;
    m1.pounds = 22.56;
    cout << m1.rice << endl; //overrided by pounds (gettting garbage value)
    cout << m1.pounds << endl;
    m1.car = 'c';
    cout << m1.rice << endl; //not getting the correct value because it is override(get  garbage value)
    cout << m1.pounds << endl;
    cout << m1.car << endl;

    //***********Enums in C++ ***************
    //Enumeration/Enums is a user defined datatype in C++
    //It is used to assign names to the integral constants which makes a program easy to read and maintain.
    //keyword "enum " is used
    //Enum increases programs readability

    enum meal
    {
        Breakfast,
        lunch,
        dinner
    }; //0 1 2
    meal m2 = Breakfast;
    meal m3 = Breakfast;
    meal m4 = Breakfast;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
    cout << (m2 == 1) << endl;
    cout << (m2 == 2) << endl;
    cout << Breakfast << endl; //0
    cout << lunch << endl;     //1
    cout << dinner << endl;    //2
    return 0;
}