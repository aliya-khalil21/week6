#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x,int y);
void clear(int x,int y,char previous);
void showPacMan(int x,int y);
void showGhost(int x,int y);
char getCharAtxy(short int x,short int y);
main()
{
int gx = 3;
int gy = 3;
string direction = "right";
char previousChar = ' ';
system("cls");
printMaze();
showGhost(gx, gy);
while (true)
{
   Sleep (100);
   //move Ghost Functionality
   if(direction == "right")
   {
    char nextLocation = getCharAtxy(gx +1,gy);
    if(nextLocation == '%')
       {direction = "left";}
       else if (nextLocation == ' ' || nextLocation == '.')

       {clear(gx,gy,previousChar);
       gx = gx+1;
       previousChar = nextLocation;
       showGhost(gx,gy);
       
       }
   }
   if (direction == "left")
   {
    char nextLocation = getCharAtxy (gx -1,gy);
    if (nextLocation== '%')
     {
      direction = "right";

     }
        else if (nextLocation == ' ' || nextLocation == '.')
        {


       {clear(gx,gy,previousChar);
       gx = gx-1;
       previousChar = nextLocation;
       showGhost(gx,gy);
       


        }
     



   }

}

}











