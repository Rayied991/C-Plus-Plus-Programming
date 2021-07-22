#include <iostream>
using namespace std;

// We can use function overloading  to create same function name but works different
int sum(int a, int b)
{
    cout << "Using function with two arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with three arguments" << endl;
    return a + b + c;
}

//calculate the volume of a cylinder
int volume(int r, int height)
{
    return (3.14 * r * r);
}
//calculate the volume of a cube
int volume(int a)
{
    return a * a * a;
}

//Rectangular box
int volume(int l, int b, int h)
{
    return (l * b * h);
}
int main()
{
    int num1, num2, num3;
    cout << "Enter 1st number:" << endl;
    cin >> num1;
    cout << "Enter 2nd number:" << endl;
    cin >> num2;
    cout << "Enter 3rd number:" << endl;
    cin >> num3;
    cout << "The sum of " << num1 << " and " << num2 << " is = " << sum(num1, num2) << endl;
    cout << "The sum of " << num2 << " and " << num3 << " is = " << sum(num2, num3) << endl;
    cout << "The sum of " << num1 << " and " << num3 << " is = " << sum(num1, num3) << endl;
    cout << "The sum of " << num1 << "," << num2 << " and " << num3 << " is = " << sum(num1, num2, num3) << endl;
    int radious, height, length, breadth;
    cout << "Enter the value of a radious:" << endl;
    cin >> radious;
    cout << "Enter the value of a height:" << endl;
    cin >> height;
    cout << "Enter the value of a length:" << endl;
    cin >> length;
    cout << "Enter the value of a breadth:" << endl;
    cin >> breadth;
    int side;
    cout << "Enter the value of side:" << endl;
    cin >> side;
    cout << "The volume of cuboid of " << num1 << "," << num2 << " and " << num3 << " is = " << volume(num1, num2, num3) << endl;
    cout << "The volume of cylinder of " << radious << " and " << height << " is = " << volume(radious, height) << endl;
    cout << "The volume of cube  of side " << side << " is = " << volume(side) << endl;
    return 0;
}