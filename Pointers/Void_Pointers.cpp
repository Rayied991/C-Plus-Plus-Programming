#include <iostream>
using namespace std;

// void PrintNumber(int *numberPtr)
// {
//     cout << *numberPtr << endl;
// }

// void Printletter(char *charPtr)
// {
//     cout << *charPtr << endl;
// }

void Print(void *ptr, char type)
{
    switch (type)
    {
    case 'i': //handle int pointer(int *)
        cout << *((int *)ptr) << endl;
        break;
    case 'c': //handle char pointer
        cout << *((char *)ptr) << endl;
        break;
    case 'b': //handle boolean pointer
        cout << *((bool *)ptr) << endl;
        break;
    case 'f': //handle float pointer
        cout << *((float *)ptr) << endl;
        break;
    case 'd': //handle double pointer
        cout << *((double *)ptr) << endl;
        break;
    case 's': //handle short pointer
        cout << *((short *)ptr) << endl;
        break;
    case 'l': //handle long pointer
        cout << *((long *)ptr) << endl;
        break;
    case 'ld':
        cout << *((long double *)ptr) << endl;
        break;
    case 'li':
        cout << *((long int *)ptr) << endl;
        break;
    default:
        cout << "Wrong Type" << endl;
        break;
    }
}

int main()
{
    //Void Pointer-> A special type of pointer that can hold address of a variable of any type of datatypes
    //Void Pointer limitation-> cannot be directly derreferance a void pointer

    int number = 5;
    float num = 23.33;
    double d = 122.6789;
    long double ld = 122.456l;
    long int x = 12324ll;
    short st = 1234;

    // PrintNumber(&number);
    // Printletter(&letter);

    //if I want to print out a floating point number.double,boolean ,struct etc.
    //In order to do each one of these I would have to create a function that receive specific datatypes pointer.
    //But, we can solve same problem using a void pointer.
    Print(&number, 'i');
    Print(&num, 'f');
    Print(&d, 'd');
    Print(&ld, 'ld');
    Print(&x, 'li');
    Print(&st, 's');

    return 0;
}