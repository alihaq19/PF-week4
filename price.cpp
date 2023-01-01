#include <iostream>
using namespace std;
void ticket (string,int);
main()
{ while(true){
  string country;
  int price;
  cout<<"Enter the name of the country "<<endl;
  cin>>country;
  cout<<"Enter the price of your ticket "<<endl;
  cin>>price;
  ticket(country,price);}
}
void ticket (string country,int amount)
{ 
  int total;
  int result;
  if(country=="pakistan")
  {
    total=amount*0.05;
    result=amount-total;
    cout<<"The total price is "<<result<<endl;
  }
  if(country=="ireland")
  {
    total=amount*0.1;
    result=amount-total;
    cout<<"The total price is "<<result<<endl;
  }
  if(country=="india")
  {
    total=amount*0.2;
    result=amount-total;
    cout<<"The total price is "<<result<<endl;
  }
  if(country=="england")
  {
    total=amount*0.3;
    result=amount-total;
    cout<<"The total price is "<<result<<endl;
  }
  if(country=="canada")
{
   total=amount*0.45;
   result=amount-total;
   cout<<"The total price is "<<result<<endl;
}
  
}