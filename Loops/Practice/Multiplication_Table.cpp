#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a integer number:" << endl;
    cin >> number;
    //using for loop

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    //using While loop
    int i = 1;
    while (i <= 10)
    {
        cout << number << " x " << i << " = " << (number * i) << endl;
        i++;
    }

    //using do-while loop
    int j = 0;
    do
    {
        cout << number << " x " << j + 1 << " = " << (number * (j + 1)) << endl;
        j++;
    } while (j <= 10);
    return 0;
}