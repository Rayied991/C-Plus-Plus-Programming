#include <iostream>
#include <Vector>//Vector header
using namespace std;
//Vector is one kind of dynamic array, to declare it we don't need to specify size
//declaration
// vector<datatype> name;
// vector<content> name;
// we can put a vector inide another vector
//datatype/content/object: int,char,double,string,structure etc.

int main()
{
    //declaration
    vector<int> v; // size=0
    //operations
    //size is increasing on demand->Dynamic memory allocation
    v.push_back(4); //inserting element
    //now size=1;index=0(4)
    v.push_back(5);   //now size=2;index=0(4),1(5)
    v.push_back(-55); //now size=3;index=0(4),1(5),2(-55)
    v.size();         //returns size=3

    //accessing vector elements
    int x = v[1]; ///x=10

    return 0;
}