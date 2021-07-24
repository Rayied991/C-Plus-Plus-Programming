#include <iostream>
#include <string>
using namespace std;
class Binary
{
    //By default class members are private
    // private:
    string s;
    void checkbin();

public:
    void read();
    void onesCompliment();
    void display();
};
void Binary::read()
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}
void Binary::checkbin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}
void Binary::onesCompliment()
{
    checkbin(); //Nesting member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at('0'))
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary::display()
{
    cout << "Displaying the Binary Numbers:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << endl;
    }
    cout << endl;
}

int main()
{
    //OOPS-> Classes and Objects

    //C++-> initially called ->C with classes by stroustriup
    //class -> extention  of structures
    //Structures has limitations
    //-> members are public
    //->No methods
    // classes -> structures+more
    //classes -> can have methods and properties
    //classes -> can make  few members  as private  and few as public
    //structures in c++  are typedefed
    // you can declare  objects  along with  the class declaration
    /* class Employee{
         class defination
     } rohan,asif,alif;
     */
    //asif.sal=8 makes no sense if sal is private(directly cannot be accessed)

    //Nesting of Member Functions -> use a function inside another function(it can be public/private we can use the function), we won't show it to the user.
    Binary b1;
    b1.read();
    // b1.checkbin(); //Nesting member function
    b1.display();
    b1.onesCompliment();
    b1.display();

    return 0;
}