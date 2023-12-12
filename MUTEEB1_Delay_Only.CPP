#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>


void main()
{
int gd=DETECT, gm=DETECT;
int i,x,y,z,p,q;
char *ptr="nahruB naahrA nioM";
char u[30];

clrscr();

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

p=getmaxx()-5;
q=getmaxy()-5;
rectangle(5,5,p,q);

x=p/3;y=q/2;i=0;
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