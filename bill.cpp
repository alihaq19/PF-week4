#include <iostream>
using namespace std;
void bill(string day,int amount);
main()
{
while(true){
string day;
int amount;
cout<<"Enter the day you shopped ";
cin>>day;
cout<<"Enter your total purchase amount ";
cin>>amount;
bill(day,amount);}
}

void bill(string day,int amount)
{
if(day=="sunday")
{
int total1;
int per1;
total1=amount*0.1;
per1=amount-total1;
cout<<"The total payable amount is "<<per1<<endl;
}
if(day=="monday")
{
int total2;
int per2;
total2=amount*0.05;
per2=amount-total2;
cout<<"The total payable amount is "<<per2<<endl;
}
if(day=="tuesday")
{
int total3;
int per3;
total3=amount*0.05;
per3=amount-total3;
cout<<"The total payable amount is "<<per3<<endl;
}
if(day=="wednesday")
{
int total4;
int per4;
total4=amount*0.05;
per4=amount-total4;
cout<<"the total payable amount is "<<per4<<endl;
}
if(day=="thursday")
{
int total7;
int per7;
total7=amount*0.05;
per7=amount-total7;
cout<<"the total payable amount is "<<per7<<endl;
}
if(day=="friday")
{
int total5;
int per5;
total5=amount*0.05;
per5=amount-total5;
cout<<"the total payable amount is "<<per5<<endl;
}
if(day=="saturday")
{
int total6;
int per6;
total6=amount*0.05;
per6=amount-total6;
cout<<"the total payable amount is "<<per6<<endl;
}
}
