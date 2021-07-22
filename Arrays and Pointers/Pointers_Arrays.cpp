#include <iostream>
using namespace std;
int main()
{
    //Array
    //Array values can be changed

    //Array example

    //Way-1

    int marks[] = {23, 45, 66, 78};
    cout << "These are Marks:\n";
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 57;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    //Way-2

    int mathmarks[4];
    mathmarks[0] = 221;
    mathmarks[1] = 225;
    mathmarks[2] = 242;
    mathmarks[3] = 322;
    cout << "These are Math Marks:\n";
    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    mathmarks[2] = 123;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;

    //Way-3 ( using for loops)

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is = " << marks[i] << endl;
    }

    // way-4 (using while loop)

    int i = 0;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is = " << marks[i] << endl;
        i++;
    }

    // way-5( using do-while loops )

    int j = 0;
    do
    {
        cout << "The value of marks " << j << " is = " << marks[j] << endl;
        j++;

    } while (j < 4);

    // way-6(using loops by taking input)

    // int size;
    // cout << "Enter size of the array:" << endl;
    // cin >> size;
    // int arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    //*************Pointers and Arrays*************
    int *p = marks;
    // cout << "*(p++) = " << *(p++) << endl;   //marks[0]=23
    // cout << "after *(p++) = " << *p << endl; //marks[1]=
    // cout << "*(++p) = " << *(++p) << endl;   //marks[2]=57
    cout << "The value of marks[0] is = " << *p << endl;
    cout << "The value of marks[1] is = " << *(p + 1) << endl;
    cout << "The value of marks[2] is = " << *(p + 2) << endl;
    cout << "The value of marks[3] is = " << *(p + 3) << endl;

    cout << "The address of marks[0] is = " << p << endl;
    cout << "The address of marks[1] is = " << (p + 1) << endl;
    cout << "The address of marks[2] is = " << (p + 2) << endl;
    cout << "The address of marks[3] is = " << (p + 3) << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The address of marks[" << i << "] is= " << p << " and The value of marks[" << i << "] is = " << *p << endl;
        p++;
    }

    return 0;
}