#include <iostream>
#include <Vector>
using namespace std;
struct Car
{
    string brand;
    double price;
};
void printselfdefinedvector(vector<Car> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].brand << " " << v[i].price << " ";
    }
    cout << endl;
}
void printvector(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(104);
    v.push_back(-14);
    v.push_back(34);
    printvector(v);
    cout << "Self defined structure:" << endl;
    Car car1;
    car1.brand = "Ferari";
    car1.price = 2000.22;
    Car car2 = {"Lamborghini", 50000};
    vector<Car> c1;
    c1.push_back(car1);
    c1.push_back(car2);
    printselfdefinedvector(c1);

    return 0;
}