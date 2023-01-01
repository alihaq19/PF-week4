#include <iostream>
using namespace std;
void eligible(int age);
main()
{
while(true)
{
int age;
cout<<"Enter your age ";
cin>>age;
 eligible(age);
}
}
void eligible(int age)
{
if(age>=18)
{
cout<<"This person is eligible to vote"<<endl;
}
}