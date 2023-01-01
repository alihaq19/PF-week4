#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
system("cls");
gotoxy(54,16);
cout << "          $$        ll     ***   $$    $$       $$                   " ; 
gotoxy(54,17);                                 
cout << "         $  $       ll      #   $$    $$       $  $                  " ;
gotoxy(54,18);
cout << "        $    $      ll      #   $$    $$      $    $                 " ;
gotoxy(54,19);
cout << "       $      $     ll      #   $$    $$     $      $                " ;
gotoxy(54,20);
cout << "      $^^^^^^^^$    ll      #   $$$$$$$$    $^^^^^^^^$               " ;
gotoxy(54,21);
cout << "     $          $   ll      #   $$    $$   $          $              " ;
gotoxy(54,22);
cout << "    $            $  ll      #   $$    $$  $            $             " ;
gotoxy(54,23);
cout << "   $              $ llllll ***  $$    $$ $              $            " ;

}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}