#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int color,bcolor,x,y,d;
	randomize();
	clrscr();
	while(!kbhit())
	{
	color=rand()%16;
	bcolor=rand()%16;

	textcolor(color);
	textbackground(bcolor);

	if(color==bcolor)
		continue;

	x=rand()%75;
	y=rand()%20;

	gotoxy(x,y);
	cout<<"875765";
	delay(100);
getch();
}