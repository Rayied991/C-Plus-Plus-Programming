#include <iostream>
using namespace std;
int main()
{
    //***********For Loop in C++ *****************
    // int i = 1;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // i++;
    //To reduce this problem Loops are introduced

    //Syntax for for loop
    // for(initialization;condition;updation)
    // {
    //     loop body(c++ code);
    // }

    for (int i = 1; i <= 40; i++)
    {
        /* Code */
        cout << i << endl;
    }

    //Infinite For loop is possible which is always true

    //Infinite for loop
    // for (int i = 1; 34 <= 40; i++) //The condition never became false->Infinite loop

    // {
    //     /* Code */
    //     cout << i << endl;
    // }
    return 0;
}