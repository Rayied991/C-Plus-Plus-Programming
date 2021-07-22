#include <iostream>
using namespace std;
int main()
{
    //Cypher
    char c1, c2, c3, c4;
    cout << "Enter 5 letters:" << endl;
    cin >> c1 >> c2 >> c3 >> c4;
    cout << "ASCII Message:" << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << endl;

    //Decypher
    int a1, a2, a3, a4;
    cout << "Enter 5 numbers:" << endl;
    cin >> a1 >> a2 >> a3 >> a4;
    cout << "Decypher Message:" << char(a1) << char(a2) << char(a3) << char(a4) << endl;

    return 0;
}