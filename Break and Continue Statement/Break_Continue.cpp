#include <iostream>
using namespace std;
int main()
{
    //*************Break and Continue Statement**************
    //break Statement -> Stop the loop
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << i << endl;
    }

    //Continue Statement
    for (int i = 0; i < 4; i++)
    {
        if (i == 2)
        {
            continue; ///it skipped 2 but all iteration runned successfully
        }
        cout << i << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            continue;
        }
    }

    return 0;
}