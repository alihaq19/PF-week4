#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int,int);
void move(int x,int y);

main()
{ 
system("cls");
printMaze();
int x=1;
int y=1;
while(true)
 {
   move(x,y);
   if(x<85)
     {
     x=x+1;
     }
     if(x==85)
{
     gotoxy(x-1,y);
     cout<<" ";
      x=2;
   }
  }
}
void printMaze()
{
cout << " ######################################################################################## " <<endl;
cout << " ||.. ...................................................................... ........  || " <<endl;
cout << " ||.. %%%%%%%%%%%%%%%%%%%             ...       %%%%%%%%%%%%%%%%%    |%|..    %%%%%%   || " <<endl;
cout << " ||..         |%|     |%|          |%|...       |%|           |%|    |%|..       |%|   || " <<endl;
cout << " ||..         |%|     |%|          |%|...       |%|           |%|    |%|..       |%|   || " <<endl;
cout << " ||..         %%%%%%%%%%      . .  |%|...       %%%%%%%%%%%%%%%%%       ..      %%%%.  || " <<endl;
cout << " ||..         |%|             . .  |%|...      ..................  |%|  ..          .  || " <<endl;
cout << " ||..         %%%%%%%%%%%%%%%%. .  |%|...      %%%%%%%%%%%%%%      |%|  ..      %%%%.  || " <<endl;
cout << " ||..                      |%|.                |%|.......          |%|  ..       |%|.  || " <<endl;
cout << " ||..       ...............|%|.         P      |%|.......|%|            ..       |%|.  || " <<endl;
cout << " ||..|%|    |%|%%%%%%%%|%|.|%|. |%|               .......|%|            ..|%|    |%|.  || " <<endl;
cout << " ||..|%|    |%|        |%|..    %%%%%%%%%%%%%%%   .......|%|             .|%|.         || " <<endl;
cout << " ||..|%|    |%|        |%|..             ...|%|      %%%%%%%            . |%|          || " <<endl;
cout << " ||..|%|                   .             ...|%|                     |%| ..|%|.         || " <<endl;
cout << " ||..|%|    %%%%%%%%%%%%%%%%%%%%         ...|%|%%%%%%%%%%%%         |%| ..|%|%%%%%%%%  || " <<endl;
cout << " ||............................................................     |%| .............  || " <<endl;
cout << " ||    ........................................................              ........  || " <<endl;
cout << " ||..|%|   |%|         |%|..   %%%%%%%%%%%%%%%%       ......|%|     |%| ..|%|.         || " <<endl;
cout << " ||..|%|   |%|         |%|..             ...|%|          %%%%%%     |%| ..|%|.         || " <<endl;
cout << " ||..|%|                   .     G       ...|%|                     |%| ..|%|.         || " <<endl;
cout << " ||..|%|   %%%%%%%%%%%%%%%%%%%%          ...|%|%%%%%%%%%%%%%%       |%| ..|%|%%%%%%%%  || " <<endl;
cout << " ||..........................................................       |%| .............  || " <<endl;
cout << " ||   .......................................................                 .......  || " <<endl;
cout << " ######################################################################################## " <<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void move(int x,int y)
{
gotoxy(x-1, y);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);
}