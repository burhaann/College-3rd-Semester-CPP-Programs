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
		cout<<"Press A to move the ball to the left.\nD to move the ball towards right.\nR to return to help menu\nAnd 0 to Exit.";
		getch();
		cleardevice();
		floor();
	}//closing "Menu" function.
	
	void floor()
	{
		//x=639,y=479;

		setfillstyle(11,WHITE);

		//1
		rectangle(0,180,20,280);
		floodfill(1,250,WHITE);

		//2
		rectangle(20,260,140,280);
		floodfill(100,270,WHITE);

		//3
		rectangle(120,300,240,320);
		floodfill(200,310,WHITE);

		//4
		rectangle(220,260,300,280);
		floodfill(260,270,WHITE);

		//5
		rectangle(280,300,400,320);
		floodfill(290,310,WHITE);

		//6
		rectangle(380,260,500,280);
		floodfill(420,270,WHITE);

		//7
		rectangle(480,220,620,240);
		floodfill(520,230,WHITE);

		//8
		rectangle(620,140,639,240);
		floodfill(630,200,WHITE);

	}//closing "Floor" Function.

void gravity(int x, int y, int z)
	{
		//gravity for the ball
		if (x>=20&&x<=150)
		{
			y=180;
			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();

				if(x>=150)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.


		if (x>=150&&x<=210)
		{
		y+=40;

			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();
				if(x>=210)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=210&&x<=310)
		{
			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();
				if(x>=310)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.


		if (x>=310&&x<=370)
		{
		y+=40;
		cleardevice();
			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();

				if(x>=370)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=370&&x<=480)
		{
			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();
				if(x>=480)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=480&&x<=600)
		{
		y-=40;
		cleardevice();
			for (int i=1;i<11;i++)
			{
			y+=7;
			circle(x,y,z);
			delay(20);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();

				if(x>=600)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

	}//closing "Gravity" Function.

void gravity_rev(int x, int y, int z)
	{
	//reverse_gravity for the ball
		if (x>15||x<139)
		{
			for (int i=1;i<11;i++)
			{
			y+=10;
			delay(10);
			cleardevice();
			circle(x,y,z);
			cleardevice();
			floor();

				if(x>=16)
				{
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.
	}//closing "Gravity_Rev" Function.

int score_board(int score,int x)
	{
		if(x<=20)
		{
		score--;
			if(score<0)
			{
			score=0;
			}//closing if case.
		gotoxy(32,5);
		cout<<"Your Score = "<<score;
		getch();
		cleardevice();
		}

		if(x>=600)
		{
		x=40;
		score++;
		gotoxy(32,5);
		cout<<"Your Score = "<<score;
		getch();
		cleardevice();
		}//closing  if case.
		return x=40;
	}//closing "Score_Board" function.
};//closing class "Game".

void main()
{
int gd=DETECT,gm;
int score=0,x,y,z=5;
char s;

		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

player play;
game data;

data.menu();
x=40,y=180;

	for(;;)
	{
		circle(x,y,z);

		if (kbhit())
		{
		s=getch();
			switch (s)
				{
				case 'a':x-=10;
					 if(x<=20)
					 {
					 x=40;
					 }

					 cleardevice;
					 data.gravity_rev(x,y,z);
					 cleardevice();
					 data.floor();
					 break;

				case 'd':x+=10;
					 data.score_board(score,x);
					 if(x>=600)
					 {
					 x=40;
					 }
					 cleardevice;
					 data.gravity(x,y,z);
					 cleardevice();
					 data.floor();
					 break;

				case 'r':data.menu();
					 x=40,y=180;
					 break;

		     /*		case 'x':x=32;
					 y=179;
					 break; */


				case '0':gotoxy(32,7);
					 cout<<"Score="<<score;
					 getch();
					 cleardevice();
					 data.menu();
					 break;

				default :gotoxy(32,16);
					 cout<<"Exiting...\t";
					 getch();
					 exit(0);
				}//closing switch case
		}//closing if case
	}//closing for loop

getch();
closegraph();
}//closing "Main" Function