#include <iostream>
using namespace std;
//A short section of the code used to perform a particular task known as Function
//Do Once use forever -> used function
int sum(int a, int b)
{
    //Formal Parameters--> a and b will be taking values from  actual parameters(num1,num2)
    int c = a + b;
    return c;
}

void word(/*void -> arguments void not necessary, you can keep it empty*/);

//Function prototype -> tells the compiler that this function will be used, the compiler will be get ready to compile the functions

//Syntax of function-prototype

// type function-name (arguments)

// int sub(int a, int b);//-->Acceptable
// int sub(int a,b);-->not acceptable
int sub(int, int); //-->Acceptable

//formal Parameters-> The parameters which are created in the function
// Actual Parameters -> The values passes through functions

int main() //This is a function
{
    int num1, num2;
    cout << "Enter 1st number:" << endl;
    cin >> num1;
    cout << "Enter 2nd number:" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is = " << sum(num1, num2) << endl;
    cout << "The Subtraction is = " << sub(num1, num2) << endl;
    word();

    return 0;
}

//if we put the function after main function then error occured -> The solution is function prototype
int sub(int a, int b)
{
    int sub;
    if (a > b)
    {
        sub = a - b;
    }
    else
    {
        sub = b - a;
    }
    return sub;
}
/// value return from a function not mandatory

void word()
{
    cout << "Hello Good Morning!" << endl;
}