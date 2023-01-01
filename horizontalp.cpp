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
   coordinates.X=x-1;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
   cout<<" ";
   coordinates.X=x;
   coordinates.Y=y;
   cout<<"P";
   Sleep(200);
   if(x<25)
   {
    x=x+1;
   }
   if(x==25)
   {
   coordinates.X=x-1;
   coordinates.Y=y;
   cout<<" ";
   x=2;
   }
  }
}