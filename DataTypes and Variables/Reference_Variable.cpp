#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &v=x;//reference variable
    //This v can be used to manipulate the content of x
    //both of them must have same type with the variable it is reffering to
    cout<<"V= "<<v<<endl;
    v=v+1;
    cout<<"V = "<<v<<endl;
    cout<<"X= "<<x<<endl;

    return 0;
}