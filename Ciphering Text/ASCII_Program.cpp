#include <iostream>
using namespace std;
int main()
{
    ///ASCII(American Standard Code for Information Interchange)
    //In ASCII Table characters are represents as numbers

    //Representing cahracter with numbers
    //ASCII Table numbers
    //ASCII uses 7 bits to represent a character-> 2^7 character(128 character) it can represent

    //casting character into a number

    cout << (int)'a' << endl; //97
    cout << int('a') << endl; //97
    cout << int('A') << endl; //65

    //casting number into a character
    cout << char(65) << endl; //A
    cout << char(97) << endl; //a
    
    return 0;
}