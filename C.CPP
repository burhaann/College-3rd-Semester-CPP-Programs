#include<iostream.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>
void main()
	{
	int gd=DETECT,gm=DETECT;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	rectangle(0,0,500,400);

	char a[30]="hello world";
	int i,j;

	setcolor(YELLOW);
	outtextxy(60,200,"Animations");
	delay(1000);
	setcolor(YELLOW);
	outtextxy(60,300,"WELCOME");


	settextstyle(TRIPLEX_FONT,HORIZ_DIR,8);
	for(i=0;a[i]!='\0';i++)
	{
	delay(100);
	setcolor(i+5);
	outtextxy(i-5,i-1,a);
	}
	while(i>0)
	{
	i--;
	delay(100);
	setcolor(i-5);
	outtextxy(i-5,i+1,a);
	}

getch();
closegraph();
}