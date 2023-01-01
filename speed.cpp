#include <iostream>
using namespace std;
main()
{
  int speed;
  cout<<"Enter the speed of the car ";
  cin>>speed;
  if(speed<=100)
  {
   cout<<"Perfect you are going good.";
  }
  if(speed>100)
  {
   cout<<"Halt.... YOU WILL BE CHALLENGED!!!";
  }
}