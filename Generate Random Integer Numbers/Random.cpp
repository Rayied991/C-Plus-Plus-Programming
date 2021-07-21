#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    //every excecution giving same random numbers
   cout<<"Random numbers=1:"<<endl;
   for(int i=1;i<=10;i++){
       cout<<rand()<<endl;//returns random numbers
   }
   //for differnce series of random numbers change the seed
   //making time of the system as the seed,because that is the only thing your system is changing on every moment
   //if you set the time of the system as seed then each excecution we will get completely different random numbers

//    time(NULL);//return value is cureent system time
   srand(time(NULL));
   cout<<"Random numbers=2:"<<endl;
   for(int i=1;i<=10;i++){
       cout<<rand()<<endl;//returns random numbers
   }
   cout<<"Random numbers=3:"<<endl;
   for(int i=1;i<=10;i++){
       cout<<rand()%100<<endl;//returns random numbers
   }


    return 0;
}