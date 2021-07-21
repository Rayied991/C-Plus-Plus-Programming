#include <iostream>
using namespace std;
int main()
{
    //Syntax of Do-while loop:
    //do{
    // C++ statements;
    //    } while(condition);
    int i = 1;
    do
    {
        cout << i << endl;
        i++;

    } while (i <= 40);
    //if the condition is false initially then for 1  time the loop will run

    int j = 2;
    do
    {
        cout << j << endl;
        j++;

    } while (false);

    //infinite Do-while loop

    // do
    // {
    //     cout << i << endl;
    //     i++;

    // } while (true);

    return 0;
}