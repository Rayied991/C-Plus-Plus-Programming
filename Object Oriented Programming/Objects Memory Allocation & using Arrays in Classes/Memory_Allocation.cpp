#include <iostream>
using namespace std;

class Shop
{
    //Private variables
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};
void Shop::setPrice()
{
    cout << "Enter  Id of your item no :" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter Price of your item:" << endl;
    cin >> itemprice[counter];
    counter++;
}
void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The  Price of item with Id " << itemid[i] << " is = " << itemprice[i] << endl;
    }
}
int main()
{
    Shop Shawpno;
    Shawpno.initcounter();
    Shawpno.setPrice();
    Shawpno.setPrice();
    Shawpno.setPrice();
    Shawpno.displayPrice();

    return 0;
}