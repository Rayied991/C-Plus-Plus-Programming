#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
//This will not swap a and b
void swap(int a, int b)
{                 //4 5
    int temp = a; //temp=4
    a = b;        //a=5
    b = temp;     //b=4
}
//call by reference using Pointers
void swapPointer(int *a, int *b)
{                  //4 5
    int temp = *a; //temp=4
    *a = *b;       //a=5
    *b = temp;     //b=4
}
//call by reference using C++ reference variables
void swapreferenceVar(int &a, int &b)
{                 //4 5
    int temp = a; //temp=4
    a = b;        //a=5
    b = temp;     //b=4
}
// return by reference -> which returns a reference
int  &swapreturnbyreference(int &a, int &b)
{                 //4 5
    int temp = a; //temp=4
    a = b;        //a=5
    b = temp;     //b=4
    return a;
}
int main()
{
    int num1, num2;
    cout << "Enter 1st number:" << endl;
    cin >> num1;
    cout << "Enter 2nd number:" << endl;
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is = " << sum(num1, num2) << endl;
    cout << "Before Swapping The value of num1 is = " << num1 << " and num2 is  = " << num2 << endl;
    //Call by reference cahnges the actual arguments/parameters
    
    // swap(num1,num2);//num1 and num2 will be copied to a and b.So, it won't b swapped
    // swapPointer(&num1, &num2);//This will swap num1 and num2 using pointer reference
    swapreferenceVar(num1, num2); //This will swap num1 and num2 using  reference variables
    // swapreturnbyreference(num1,num2)=766;// num1 will be 766
    cout << "After  Swapping The value of num1 is = " << num1 << " and num2 is  = " << num2 << endl;
   
    
   
    
    return 0;
}