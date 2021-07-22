#include <iostream>
using namespace std;
//inline function-> expend in same line, compiler replace the function call in compile time
// make inline those functions which takes less line of code
//making big functions inline then there will be no memory in cache, it will take much more memory , the program memory will increase much more , it will hampered my code.
//in recursion-> using inline function is not recommended
inline int product(int a, int b)
{
    return a * b;
}

int product2(int a, int b)
{
    //Not recommmeded to use below lines with inline functions
    static int c = 0; //static variable-> initializes only for one time(This  executes only once). The will remain saved.
    c = c + 1;        // Next time this function  is runned, the value of c  will be retained
    return a * b + c;
}

//Default arguments -> by default set if yu didn't enter any value

float moneyreceived(int curr, float factor = 1.04) //first=mandetory arguments, then default arguments
{
    return curr * factor;
}

// float moneyreceived(float factor = 1.04,int curr) //error occured
// {
//     return curr * factor;
// }

//Constant Arguments -> accidently do not change the value of the functions , we use qualifier "const"

// int strlen(const char *p)
// {
// }

int main()
{
    int num1, num2;
    cout << "Enter the value of a and num1:" << endl;
    cin >> num1;
    cout << "Enter the value of a and num2:" << endl;
    cin >> num2;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product(num1, num2) << endl;

    //Static Variables
    // cout << "The product of num1 and num2 is = " << product2(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product2(num1, num2) << endl;
    // cout << "The product of num1 and num2 is = " << product2(num1, num2) << endl;

    int money = 100000;
    cout << "If  you have " << money << " tk in your bank account, you will receive = " << moneyreceived(money) << " tk  after 1 year" << endl;
    cout << " For VIP: if you have " << money << " tk in your bank account, you will receive = " << moneyreceived(money, 1.1) << " tk after 1 year" << endl;
    // cout<<moneyreceived(money)<<endl;// error occured
    return 0;
}