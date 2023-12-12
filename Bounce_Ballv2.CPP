#include<iostream.h>
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
		cout<<"Press A to move the ball to the left.\nD to move the ball towards right.\nR to return to help menu\n0 for Score.\nAnd anything else to exit.";
		getch();
		cleardevice();
		floor();
	}//closing "Menu" function.

int life(int x_obstacle, int x, int lives)
{
/*	gotoxy(32,7);
	cout<<x<<"  "<<x_obstacle;
	gotoxy(32,8);
	cout<<x-16<<"  "<<x+6;*/
     if(x_obstacle<=x+6&&x_obstacle>=x-16)
	{
		lives--;
       }
return lives;
}//closing "Lives" function.


int obstacle(int x_obstacle,int y_obstacle, int radius, int x, int lives)
	{
	int max_x=600,max_r=10;
	x_obstacle=rand()%max_x;
	radius=rand()%max_r;
	y_obstacle=0;
	int lig;

		if(x_obstacle<=30)
		{
		x_obstacle+=25;
		}

	lig=life(x_obstacle,x,lives);
 /*	gotoxy(32,2);
	cout<<lig; */

  /*	if(x_obstacle<=x+50&&x_obstacle>=x-50)
		{
		lives--;
		}
		gotoxy(35,2);
		cout<<"Lives "<<lives;
	if(x-3<=x_obstacle||x+3>=x_obstacle)
		{
		lives--;
		gotoxy(35,2);
		cout<<"Lives "<<lives;
		gotoxy(35,3);
		cout<<"X_obs  "<<x_obstacle;
		gotoxy(32,4);
		cout<<"x  "<<x<<" - "<<x-20<<" + "<<x+20;
		}*/


	for(int i=0;i<=180;i+=15)
	{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=17;



	     //	delay(20);
		floor();

	  /*	if (x>=0&&x<=150)//1
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=17;
		//y=180;
		}
		if (x>150&&x<=210)//2
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		//y=220;
		}
		if (x>210&&x<=310)//3
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		//y=180;
		}
		if (x>310&&x<=370)//4
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		//y=220;
		}
		if (x>370&&x<=480)//5
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		//y=180;
		}
		if (x>480&&x<=630)//6
		{
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		//y=140;
		}

			sound(i/i);
			delay(20);
			cleardevice();

		if(y_obstacle>=180)
				{
				int max_x=600,max_r=10;
				x_obstacle=rand()%max_x;
				radius=rand()%max_r;
				y_obstacle=0;
				for(int i=0;i<=180;i+=15)
				{
				y_obstacle+=20;
				circle(x_obstacle,y_obstacle,radius);
				}//closing for loop.
				}//closing if case.

		circle(x_obstacle,y_obstacle,radius);
		rectangle(x_obstacle,y_obstacle,x_obstacle+10,y_obstacle+10);
		y_obstacle+=12;
		if(y_obstacle>=180)
		{
		y_obstacle=0;
		}*/
	}//closing for loop.
    return lig;
  }//closing "Obstacle" function.


	void floor()
	{
		//x=639,y=479;

		setfillstyle(11,WHITE);

		//1
		rectangle(0,140,20,280);
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

		/*/9 Magnet
		setfillstyle(4,WHITE);
		rectangle(20,140,480,174);
		rectangle(480,140,619,100);
		floodfill(250,130,WHITE);
		gotoxy(34,10);
		cout<<"Magnet";

		setfillstyle(11,WHITE); */


	}//closing "Floor" Function.


void gravity(int x, int y, int z)
	{
	/*
	if (x>=0&&x<=150)//1
	{
	y=180;
	}
	if (x>150&&x<=210)//2
	{
	y=220;
	}
	if (x>210&&x<=310)//3
	{
	y=180;
	}
	if (x>310&&x<=370)//4
	{
	y=220;
	}
	if (x>370&&x<=480)//5
	{
	y=180;
	}
	if (x>480&&x<=630)//6
	{
	y=140;
	}*/

		//gravity for the ball
		if (x>=20&&x<=150)//1
		{
			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
		     /*	circle(x,y,z);
			cleardevice();
			floor();*/

				if(x>=150)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.


		if (x>=150&&x<=210)//2
		{
		y+=40;


			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
		/*	circle(x,y,z);
			cleardevice();
			floor();*/
				if(x>=210)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=210&&x<=310)//3
		{
			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
	/*		circle(x,y,z);
			cleardevice();
			floor();*/
				if(x>=310)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.


		if (x>=310&&x<=370)//4
		{
		y+=40;
		cleardevice();
			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
	 /*		circle(x,y,z);
			cleardevice();
			floor();*/

				if(x>=370)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=370&&x<=480)//5
		{
			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
	  /*		circle(x,y,z);
			cleardevice();
			floor();*/
				if(x>=480)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.

		if (x>=480&&x<=600)//6
		{
		 y-=40;
		 cleardevice();

			for (int i=1;i<11;i++)
			{
			y+=7;
			sound(i*i*i);
			circle(x,y,z);
			delay(20);
			cleardevice();
	   /*		circle(x,y,z);
			cleardevice();
			floor();*/

				if(x>=600)
				{
				nosound();
				break;
				}//closing if case.

			}//closing for loop.
		}//closing if case.
	}//closing "Gravity" Function.

void gravity_rev(int x, int y, int z)
	{
	//reverse_gravity for the ball
	gravity(x,y,z);
	}//closing "Gravity_Rev" Function.

int score_board(int score,int x,int lives)
	{
		if(x<=30)
		{
		score--;
		lives--;
			if(score<0)
			{
			score=0;
			}//closing if case.

			for (int i=1;i<11;i++)
			{
			sound(i);
			}
		gotoxy(30,5);
		cout<<"Your Score = "<<score<<".";
		gotoxy(22,7);
		cout<<"One Life Deducted as a Penalty.";
		gotoxy(31,9);
		cout<<"  Lives = "<<lives;
		getch();
		nosound();
		cleardevice();
		}

		if(x>=600)
		{
		x=40;
		score++;
		lives+=10;
		gotoxy(32,5);
		cout<<"Your Score = "<<score;
		gotoxy(30,8);
		cout<<"Bonus = 10 Lives.";
			for (int i=1;i<11;i++)
			{
			sound(i);
			}
		getch();
		cleardevice();
		}//closing  if case.
		return lives;
	}//closing "Score_Board" function.
};//closing class "Game".

void main()
{
int gd=DETECT,gm;
int score=0,lives=5,x,y,z=5,li,l;
int x_obstacle,y_obstacle,radius;
char s;

		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

/*		int max_x=600,max_r=10;
		x_obstacle=rand()%max_x;
		radius=rand()%max_r;
		y_obstacle=0;


		if(x_obstacle<=30)
			{
			x_obstacle+=25;
			} */


player play;
game data;

data.menu();

	//X Cordinates
	x=40;

	//Y cordinates

	if (x>=0&&x<=150)//1
	{
	y=180;
	}
	if (x>150&&x<=210)//2
	{
	y=220;
	}
	if (x>210&&x<=310)//3
	{
	y=180;
	}
	if (x>310&&x<=370)//4
	{
	y=220;
	}
	if (x>370&&x<=480)//5
	{
	y=180;
	}
	if (x>480&&x<=630)//6
	{
	y=140;
	}


	for(;;)
	{
		circle(x,y,z);

		if (kbhit())
		{
		s=getch();
			switch (s)
				{
				case 'a':x-=10;
					 l=data.score_board(score,x,lives);
					 lives=l;
					 nosound();
					 if(x<=20)
					 {
					 x=40;
					 }

					 cleardevice;
					 data.gravity_rev(x,y,z);
					 li=data.obstacle(x_obstacle,y_obstacle,radius,x,lives);
					 lives=li;
					 gotoxy(32,5);
					 cout<<"Lives "<<li;
							if (lives==0)
								{
								gotoxy(32,5);
								cout<<"Lives "<<li<<" = Death   :(";
								gotoxy(30,10);
								cout<<"You LOST ... Try Again.";
								nosound();
								getch();
								main();
								}

					 nosound();
					 nosound();
				    //	 cleardevice();
					 data.floor();

					 break;

				case 'd':x+=10;
					 l=data.score_board(score,x,lives);
					 lives=l;
					 nosound();
					 if(x>=600)
					 {
					 x=40;
			  //		 lives--;
					 score++;
					 }
					 cleardevice;
					 data.gravity(x,y,z);
					 li=data.obstacle(x_obstacle,y_obstacle,radius,x,lives);
					 lives=li;
					 gotoxy(32,5);
					 cout<<"Lives "<<li;
							if (lives==0)
								{
								gotoxy(32,5);
								cout<<"Lives "<<li<<" = Death   :(";
								gotoxy(30,10);
								cout<<"You LOST ... Try Again.";
								nosound();
								getch();
								main();
								}

					 nosound();
				//	 cleardevice();
					 data.floor();
			     /*		 gotoxy(32,5);
					 cout<<"Your Score "<<score;*/

					 //Values of z

					 if(z>=5)
						{
						z+=1;
						}
					 if(z<=10)
						{
						z-=1;
						}
					 break;

				case 'r':data.menu();
					 break;

			    /*	case 'x':x=32;
					 y=179;
					 break;*/


				case '0':gotoxy(31,7);
					 cout<<"Score = "<<score;
					 getch();
		//			 cleardevice();
		//			 data.menu();
					 break;

				default :gotoxy(32,16);
					 cout<<"Exiting...\t";
					 getch();
					 exit(0);
				}//closing switch case
		}//closing if case
	}//closing for loop


closegraph();
}//closing "Main" Function