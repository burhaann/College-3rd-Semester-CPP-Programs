#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd = DETECT, gm;
	int x,y,a,b,i=0;
	char c;
	clrscr();

	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	x=getmaxx();
	y=getmaxy();
	a=x/4;
	b=y/4;


	rectangle(a,b,a+25+i,b+25+i);
	if(kbhit)
	c=getch();
	if (int(c)==119)
	i++;

	getch();
	closegraph();
}