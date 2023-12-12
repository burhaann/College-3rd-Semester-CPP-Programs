#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main()

{
int gd=DETECT,gm;
char s;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

cout<<"Press A or B.\nPress Anything Else to Exit.\n\n";
for(;;)
{
if (kbhit())
{
s=getch();
switch (s)

	{
	case 'a':cout<<"Alphabet A\t";
		break;
	case 'b':cout<<"Alphabet B\t";
		break;

	default :cout<<"Exiting...\t";
		getch();
		exit(0);
	}
}
}
getch();
closegraph();
}