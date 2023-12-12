#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>

void main()
{
int gd=DETECT,gm;
int x,y,i=0;


		initgraph(&gd,&gm,"c:\\turboc3\\bgi");

		x=getmaxx();
		y=getmaxy();

		//setfillstyle(2,WHITE);
		//rectangle(10,10,x-10,y-10);
		for(i=0;i<=10;i++)
		{
		setfillstyle(i,RED);
		floodfill(100,100,RED);
		rectangle(20,20,x-20,y-20);
		cout<<i;
		delay(1000);
		cleardevice();
		}
		/*for(j=0;j<=100;j++)
		{
		bar3d(50+i,100+i,160+i,160+i,15,1);
		bar3d(60+i,50+i,150+i,100+i,10,1);
		i+=20;
		delay(20);
		}
		for()
		circle(x/2-j,y/2-j,25+j);*/
		getch();
}