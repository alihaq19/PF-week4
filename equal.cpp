#include <iostream>
using namespace std;
void equal(int x,int y);
main()
{
  int num1;
  int num2;
  cout<<"Enter a number ";
  cin>>num1;
  cout<<"Enter 2nd number ";
  cin>>num2;
  equal(num1,num2);
}
void equal(int x,int y)
{
  if(x==y)
  {
    cout<<"True";
  }
  if(x!=y)
  {
    cout<<"False";
  }
}