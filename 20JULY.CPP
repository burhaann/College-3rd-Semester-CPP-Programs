#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()

{
int a=150,b=200,i;
int gd = DETECT , gm;
initgraph( &gd, &gm,"C:\\TURBOC3\\BGI");
outtextxy(150,200,"Press Any Key to Witness the Leagand");

getch();
for (i=180;i<=360;i+15)
{
arc(a,b,0,0+i,100);
delay(100);
cleardevice();
getch();
}
delay(20);
outtextxy(180,200,"Press Anything to Kill ME");
getch();
closegraph();
}