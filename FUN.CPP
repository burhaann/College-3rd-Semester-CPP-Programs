#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>

void main()
{
	int gd = DETECT, gm;
	long long int i;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	for (i=10;i<=100;i+10)
	{
	rectangle(10,10,100+i,100+i);
	}
getch();
}

