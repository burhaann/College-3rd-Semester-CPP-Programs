
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#define RAND_MAX 620
void main()
{
	int gd=DETECT,gm;
	int x,y;
	int a;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	x=getmaxx();
	y=getmaxy();
	bar3d(50,50,100,100,20,0);
	getch();
	for(int i=0;i<100;i++)
	{
	a=rand()%x;
	cout<<a<<"\t"<<RAND_MAX<<"\n";
	}
	getch();
getch();
}