#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    //'<<' is called insertion operator
    cout << "Enter two number:" << endl;
    //'>>' is called extraction operator
    cin >> num1 >> num2;

    cout << "Sum= " << num1 + num2 << endl;

    return 0;
}