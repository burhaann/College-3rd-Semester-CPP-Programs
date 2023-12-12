#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>

void main()
{
int i=250,j=250,x=0,y=-1,ch,gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
while(1)
{
circle(i,j,30);
outtextxy(400,400,"Press");
if(kbhit())
{

ch=getch();

if(ch==119)
 {
  cout<<"moving upward";
	x=0;
	y=-1;
 }

 if(ch==120)
  cout<<"moving left";
 {

 x=-1;
 y=0;

 }

 if(ch==121)
 cout<<"moving right";
 {
 x=1;
 y=0;
 }

 if(ch==122)
 cout<<"moving downward";
 {
 x=0;
 y=1;
 }

 if(ch==124)
 cout<<"exit";
 getch();
 }
 i=i+x;
 j=j+y;

 delay(50);
 cleardevice();
 }
 getch();
}