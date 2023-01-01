#include <iostream>
using namespace std;
void evenodd(int number);
main()
{
  while (true)
  {
  int number;
  cout<<"Enter a number to know if its even or odd ";
  cin>>number;
  evenodd(number);
}
}
void evenodd(int number)
{ 
  if(number%2==0)
  {
  cout<<"It is an even number "<<endl;
  }
  if(number%2!=0)
  {
  cout<<"It is an odd number "<<endl;
  }
}