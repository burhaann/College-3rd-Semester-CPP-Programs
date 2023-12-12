#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gm;
	int x,y,p,q,a=25,b=25;
	char ch;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	x=getmaxx();
	y=getmaxy();

	rectangle(x/5,y/5,x/5+a,y/5+b);

	for(;;)
	{
	if(kbhit())
	ch=getch();
	cleardevice();
	switch(ch)
		{
		case 'w' :
			rectangle(x/5,y/5-5,x/5+a,y/5+b+5);
			getch();
			break;
		case 's' :
			rectangle(x/5+5,y/5,x/5+a+5,y/5+b);
			getch();
			break;
		case 'a' :
			rectangle(x/5,y/5+5,x/5+a,y/5+b+5);
			getch();
			break;
		case 'd' :
			rectangle(x/5+5,y/5,x/5+a+5,y/5+b);
			getch();
			break;
		case 'q' :
			outtextxy(x/3,x/2,"Press Any Key to Exit");
			getch();
			break;
		}
			if (ch=='q')
			break;

	}
	getch();
}