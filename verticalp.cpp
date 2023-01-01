#include <iostream>
#include <windows.h>
using namespace std;
main()
{
  system("cls");
  cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&                                          &"<<endl;
  cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl; 
  int x=2;
  int y=2;
  while(true)
  {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y-1;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
   cout<<" ";
   coordinates.X=x;
   coordinates.Y=y;
   cout<<"P";
   Sleep(200);
   if(y<14)
   {
    y=y+1;
   }
   if(y==14)
   {
   coordinates.X=x;
   coordinates.Y=y-1;
   cout<<"  ";
   y=2;
   }
  }
}