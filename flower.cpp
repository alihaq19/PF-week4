#include <iostream>
using namespace std;
main()
{
  int redn;
  int whiten;
  int tulipsn;
  float pricer;
  float pricew;
  float pricet;
  float total;
  float discount;
  float total_discount;
  cout<<"Enter the number of red roses "<<endl;
  cin>>redn;
  cout<<"Enter the number of white roses "<<endl;
  cin>>whiten;
  cout<<"Enter the number of tulips "<<endl;
  cin>>tulipsn;
  pricer=redn*2.00;
  pricew=whiten*4.10;
  pricet=tulipsn*2.50;
  total=pricer+pricew+pricet;
  if(total>200)
  {
    discount=total*0.2;
    total_discount=total-discount;
    cout<<"Your total amount before discount was "<<total<<endl;
    cout<<"Your total amount after the discount is "<<total_discount<<endl;
  }
  if(total<=200)
  {
   cout<<"Your total amount is "<<total<<endl;
  }
  
}