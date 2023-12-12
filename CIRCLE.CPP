#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{

int gd=DETECT, gm=DETECT;
initgraph(&gm,&gm,"c:\\turboc3\\bgi");
rectangle(50,50,400,400);

getch();
closegraph();
}