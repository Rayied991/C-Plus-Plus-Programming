#include <iostream>
using namespace std;
int global = 6; //Global Variable
void sum()
{
  cout << "Global Variable= " << global << endl;
}
int main()
{
  //local variable
  int global = 9;
  //local variable takes precedence from global variable
  global = 777;

  //local and global variable can be made by same name, but presendence will be counted for local variable

  // int a=4;
  // int b=5;

  //built-in datatypes in c++
  int a = 4, b = 5;
  float pi = 3.14;
  char c = 'u';
  bool choice = true;
  bool choice2 = false;
  cout << "The value of a = " << a << " and b= " << b << endl;
  cout << "The value of Pi is= " << pi << endl;
  cout << "The value of  c is= " << c << endl;
  cout << "The Local Variable = " << global << endl;
  sum();
  cout << "Boolean value= " << choice << endl;
  cout << "Boolean value= " << choice2 << endl;

  return 0;
}