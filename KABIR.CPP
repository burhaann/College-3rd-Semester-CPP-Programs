#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

class player
{
public:

	int x,y,i;
	int gd,gm;

	player()
	{
		gd=DETECT;
		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		x=getmaxx();
		y=getmaxy();
	}//closing player constructor.
};//closing class "Player".

class game: public player

{
public:
	void menu()
	{
		gotoxy(1,15);
		cout<<"Press A to view a rainbow\nB to Fire\nM to return to help menu\nAnd 0 to Exit.";
		getch();
		cleardevice();
	}//closing "Menu" function.

	void colors()
	{
		for (i=0;i<=230;i++)
		{
			if(i>=y/3+30)
			{
			break;
			}//closing if case.

			else
			{
			delay(5);
			setcolor(i/10+12);
			//circle(x/2,y/2,i);
			//i++;
			rectangle(0+i,0+i,x-i,y-i);
			arc(x/2,y/2,0,180,i+50);
			arc(x/2,y/2,180,0,i+50);
			//bar3d(0+i,0+i,x-i,y-i,i,1);
			sound(i);
			sound(i+10);
			sound(i-2);
			}//closing else case.
		}//closing for loop.
	}//closing "Colors" function.

	void floor()
	{
		//x=639,y=479;

		setfillstyle(11,WHITE);

		//1
		rectangle(0,179,16,279);
		floodfill(1,250,WHITE);

		//2
		rectangle(16,263,139,279);
		floodfill(100,270,WHITE);

		//3
		rectangle(123,295,225,311);
		floodfill(200,300,WHITE);

		//4
		rectangle(209,263,300,279);
		floodfill(260,270,WHITE);

		//5
		rectangle(280,295,400,311);
		floodfill(290,300,WHITE);

		//6
		rectangle(384,263,500,279);
		floodfill(420,270,WHITE);

		//7
		rectangle(484,231,623,247);
		floodfill(520,240,WHITE);

		//8
		rectangle(623,147,639,247);
		floodfill(630,200,WHITE);

	}//closing "Floor" Function.

	void fire()
	{


		for(;;)
		{
			int c=x,d=y;
			circle(c-5,d-5,5);
			y=y-10;
			sound(c+d);
			floor();

			if (d<=10)//once the circle reaches the top stop the loop.
				{
				x=getmaxx();
				y=getmaxy();
				nosound();
				break;
				}//closing if case.
			delay(10);
			clearviewport();
		}//closing for loop.
	}//closing "Fire" function.
};//closing class "Game".

void main()

{
int gd=DETECT,gm;
char s;

		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

player play;
game data;

data.menu();
data.floor();

	for(;;)
	{
		if (kbhit())
		{
		s=getch();
			switch (s)
				{
				case 'a':data.colors();
					 nosound();
				 //	 getch();
				 //	 cleardevice();
					 break;

				case 'b'://data.floor();
					 data.fire();
					 nosound();
				     //	 getch();
				     //	 cleardevice();
					 break;

				case 'm':data.menu();
				   //	 getch();
				   //	 cleardevice();
					 break;

				case 'x':data.floor();
				   //	 getch();
				   //	 cleardevice;
					 break;


				case '0' :gotoxy(32,16);
					  cout<<"Exiting...\t";
					  getch();
					  exit(0);

				default  :gotoxy(32,16);
					  cout<<"Exiting...\t";
					  getch();
					  exit(0);
				}//closing switch case
		}//closing if case
	}//closing for loop

getch();
closegraph();
}//closing "Main" Function