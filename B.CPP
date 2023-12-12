#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm=DETECT;
int i,x,y,z;
char *ptr="Arhaan Muteeb  Moin Your Are My Sain'Your'Ritta";
char u[1];
clrscr();

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

x=100;y=100;i=0;
while(ptr[i]!=NULL)
{
	u[0]=ptr[i];
	outtextxy(x,y,u);
	x=x+10;i++;
	delay(300);
}
getch();
closegraph();
}