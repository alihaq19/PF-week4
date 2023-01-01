#include <iostream>
using namespace std;
main()
{
  int holidays;
  int working_time;
  int days;
  int free_time;
  int total_time;
  int tomn;
  int hours;
  int hour2;
  int minutes;
  cout<<"Enter the number of holidays ";
  cin>>holidays;
  days=365-holidays;
  working_time=days*63;
  free_time=holidays*127;
  total_time=working_time+free_time;
  tomn=30000-total_time;
  hours=tomn/60;
  hour2=hours*60;
  minutes=tomn-hour2;
  if(tomn<1250)
  {
    cout<<"Tom will run away "<<hours<<" hours and "<<minutes<<" minutes for play";
  }
  if(tomn>=1250)
  {
    cout<<"Tom sleeps well for "<<hours<<" hours and "<<minutes<<" minutes for play";
  }

}