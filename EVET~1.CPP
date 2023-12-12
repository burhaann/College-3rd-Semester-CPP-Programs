#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>

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


class dev
{

public:

void main_menu()
{

	//INSIDE BOX
	setbkcolor(1);
	setcolor(15);
	settextstyle(7, 0, 3);

	//TITLE
	outtextxy(80,70,"Arhaan-Burhaann-Moin Inside Box");
	line(35,100,600,100);

	//OPTIONS
	setcolor(15);
	settextstyle(3, 0, 2);
	outtextxy(90,120,"1. Addition");
	outtextxy(90,150,"2. Factorial");
	outtextxy(90,180,"3. Palindrome");
	outtextxy(90,210,"4. About our Team");
	outtextxy(90,240,"5. Cab Ride");

	delay(500);

	outtextxy(400,120,"6. Bounce Ball");
	outtextxy(400,150,"7. Survival Instinct");
	outtextxy(400,180,"8. Exit");

	line(35,280,600,280);
	line(35,310,600,310);

	//ENTER OPTION
	setcolor(15);
	settextstyle(3, 0, 1);
	outtextxy(90,282,"ENTER YOUR OPTION : ");
	gotoxy(40,19);



}


	void developer()
	{
	long long char *ptr="Arhaan Burhan Moin";
	long long char u[10000];
	int p,q,x,y,i,j;
	p=getmaxx();
	q=getmaxy();

	for (i=20,j=20;i<=40;i+=1,j+=1)
	{
	rectangle(i,i,p-j,q-j);
	}
	for (i=10,j=10;i<=14;i+=1,j+=1)
	{
	rectangle(i,i,p-j,q-j);
	}
	for (i=46,j=46;i<=50;i+=1,j+=1)
	{
	rectangle(i,i,p-j,q-j);
	}


	circle(p/2,q/2,144);
	circle(p/2,q/2,145);
	circle(p/2,q/2,146);
	circle(p/2,q/2,150);
	circle(p/2,q/2,151);
	circle(p/2,q/2,152);
	circle(p/2,q/2,153);
	circle(p/2,q/2,154);
	circle(p/2,q/2,155);
	circle(p/2,q/2,156);
	circle(p/2,q/2,157);
	circle(p/2,q/2,158);
	circle(p/2,q/2,162);
	circle(p/2,q/2,163);
	circle(p/2,q/2,164);


	delay(700);

	x=p/3;y=q/2;i=0;


	delay(750);

	x=p/3;y=q/2;i=0;


	while(ptr[i]!=NULL)
		{
		u[0]=ptr[i];
		setbkcolor(7);
		setcolor(8);
		outtextxy(x,y,u);
		x=x+10;i++;
		delay(100);
		}

	delay(600);
	cleardevice();
	delay(0);
	}





	void car()
	{
	int i,j=0,a,k=25;
	char con;
	settextstyle(0,0,1);


	outtextxy(180,240,"Press Any key To See A Moving Cab");
	getch();

	for(;;){

		for(i=0;i<=180;i+=2,j++)
		{

		//BODY
		k+=10;
		sound(k);
		setbkcolor(CYAN);
		//setfillstyle(1,RED);
		rectangle(300-i,180,600-i,300);
		//floodfill(100,100,RED);

		//BUMP
		rectangle(200-i,200,300-i,280);


		//TIRES
		circle(330-i,325,25);
		circle(380-i,325,25);
		circle(520-i,325,25);
		circle(580-i,325,25);
		circle(330-i,325,15);
		circle(380-i,325,15);
		circle(520-i,325,15);
		circle(580-i,325,15);
		setcolor(j);
		delay(100);


		if(j==15)
		j=0;

		cleardevice();

		}
	k=0;


	outtextxy(100,120,"Wanna Go For Another Ride");
	outtextxy(100,140,"No : Press 0 (Stops Sound Also)");
	outtextxy(100,160,"Yes : Hit Any other key.");
	gotoxy(13,13);
	cin>>con;
	if(con==48)
	{
	nosound();
	break;
	}
	}

	gotoxy(13,15);
	cout<<"Press Any key To Exit!";
	getch();
	cleardevice();
	delay(0);
	}


};

void main()
{

   int gd = DETECT, gm	;
   long long int rev =0,rem,org,n,i,j,val1,val3;
   long long int val2,fact=1,g=1,h;
   char val;


	int score=0,lives=5,x,y,z=5,li,l;
	int x_obstacle,y_obstacle,radius;
	char s;

		//DECLERATIONS OF VARIABLES
	int c,cx,bd,bt=0;
	int w,a,d;
	int m,v,b;
	int m1,n1,v1,b1;
	char kb,ex;
	int col=0;

	//MAXIMUM X-Y COORDINATES
	x=getmaxx();
	y=getmaxy();

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

		dev object1;
		setbkcolor(RED);
		setcolor(WHITE);

	object1.developer();


		player play;
		game data;

   do{
	setbkcolor(4);
	setcolor(15);
	settextstyle(7,0,4);
	//setfillstyle(SOLID_FILL,BLACK);
	//rectangle(10,50,627,407);
	//floodfill(10,50,RED);


	//RECTANGLE STAR BOX

	//rectangle(10,50,627,407);
	if (g==1)
	{
	h=10;
	}
	else
	{
	h=0;
	}

	for(j=10;j<=620;j=j+10)
	{
	   outtextxy(j,50,"*");
	   delay(h);
	}
	for(i=50;i<=400;i=i+10)
	{
	   outtextxy(620,i,"*");
	   delay(h);
	}
	for(j=620;j>=10;j=j-10)
	{
	   outtextxy(j,400,"*");
	   delay(h);
	}
	for(i=400;i>=50;i=i-10)
	{
	   outtextxy(10,i,"*");
	   delay(h);
	}
	g=0;
	

	
object1.main_menu();
      cin>>val;

	switch(val)
	{
	case 49:
			gotoxy(12,21);
			cout<<"Enter Two Numbers : \n";
			gotoxy(12,22);
			cin>>val2;
			gotoxy(12,23);
			cin>>val3;
			gotoxy(12,24);
			cout<<"Sum Of Given 2 numbers Is : "<<val2+val3<<"\n";
			gotoxy(12,25);
			cout<<"Press Any Key To Choose Another Option.";
			getch();
			break;

	case 50: gotoxy(12,21);
			cout<<"Enter Number Whose Factorial Is Needed : \n";
			gotoxy(12,22);
			cin>>val2;

			for(i=1;i<=val2;i++)
			{
			  fact=fact*i;
			}

			gotoxy(12,23);
			cout<<"Factorial Of Given Number Is : "<<fact<<"\n";
			fact=1;
			gotoxy(12,24);
			cout<<"Press Any Key To Choose Another Option.";
			getch();
			break;

	case 51: gotoxy(12,21);
			cout<<"Enter Any Number :\n";
			gotoxy(12,22);
			cin>>n;
			gotoxy(12,23);
			org = n;

			while(n>0)
			{
				rem = n%10;
				rev = rev*10 + rem;
				n = n/10;
			}

			cout << "The reverse of the number is: " << rev << endl;
			gotoxy(12,24);
			if( org == rev )

			cout<<"The Given Number Is Palindrome:";
			else
			cout<<"The Given Number Is Not Palindrome.\n";

			gotoxy(12,25);
			cout<<"Press Any Key To Choose Another Option.";
			getch();

			break;

	case 52: gotoxy(12,21);
			cout<<"God Level Developer!\n";
			cleardevice();
			settextstyle(2,0,7);
			object1.developer();
			gotoxy(15,15);
			cout<<"Press Any Key To Return to Program Selection Menu.";
			getch();
			break;

	case 53: gotoxy(12,21);


			cleardevice();
			object1.car();
			gotoxy(15,15);
			setbkcolor(RED);
			cout<<"Press Any Key To Return to Program Selection Menu.";
			getch();
			break;

	case 54: 

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
				//	 break;
					setbkcolor(4);
					setcolor(15);
					settextstyle(7,0,4);
					cleardevice();
					 main();

				}//closing switch case
		}//closing if case
	}//closing for loop
			getch();
		//	break;

	case 55:
	cleardevice();
	score=0,lives=5;
	col=0;
	x=getmaxx();
	y=getmaxy();

	//HOMESCREEN + INTRO
	setbkcolor(CYAN);
	settextstyle(3,0,4);
	setcolor(MAGENTA);

	outtextxy(x/2-314,y/2-100,"Welcome To Our Project 'Survival Instinct'");
	outtextxy(x/2-312,y/2-98,"Welcome To Our Project 'Survival Instinct'");
	delay(50);
	outtextxy(x/2-270,y/2-50,"PRESS ANY KEY TO GET STARTED!");
	outtextxy(x/2-268,y/2-48,"PRESS ANY KEY TO GET STARTED!");
	
	outtextxy(x/2-268,y/2+30,"INSTRUCTIONS :");
	outtextxy(x/2-268,y/2+60,"PRESS 'P' TO SHOOT!");
	outtextxy(x/2-268,y/2+90,"PRESS 'Q' TO EXIT!");
	outtextxy(x/2-268,y/2+120,"PRESS 'A' 'D' TO MOVE!");
	getch();

	//TANK COORDINATES
	int DEPTH=5;
	int DEPTH1=3;
	int TOPFLAG=1;
	j=y-25;
	m=x/2;
	n=y-5;
	b=x/2+20;
	v=y-35;
	m1=m+5;
	n1=y-35;
	b1=b-5;
	v1=y-45;

	/*GAME POINTS USED IN DIFFERENT OBJECTS
	rectangle(1,1,x-1,y-1);
	rectangle(2,2,x-1,y-2);
	rectangle(3,3,x-3,y-3);

	setfillstyle(XHATCH_FILL,RED);
	circle(x/4,10,5);
	floodfill(x/4,10,RED);

	bar3d(m,n,b,v,10,1);
	bar3d(m1,n1,b1,v1,7,1);
	*/

	settextstyle(2,0,5);
	setbkcolor(DARKGRAY);

	for(;;)
	{
	cx=rand()%x;
		for(i=55;i<=y-10;i+=4)
		{
		col++;
		cleardevice();
		gotoxy(10,2);
		cout<<score;
		gotoxy(10,3);
		cout<<lives;
		setcolor(LIGHTGRAY);
		outtextxy(10,15,"SCORE : ");
		outtextxy(10,30,"LIVES : ");
		outtextxy(x/2+50,5,"PRESS 'Q' ANYTIME TO EXIT PROGRAM!");
		outtextxy(x/2+50,15,"Follow On Instagram @arhaanhamid");
		outtextxy(x/2+50,25,"Follow On Instagram @moinkhan1225");
		outtextxy(x/2+50,35,"Follow On Instagram @burhaann_ashraf");

		
		//GAME BORDER
		setcolor(LIGHTGRAY);
		for(bd=0;bd<=5;bd++)
		{rectangle(0+bd,50+bd,x-bd,y-bd);}
		


		setfillstyle(INTERLEAVE_FILL,col);
		setcolor(col);
		circle(cx,i,8);
		floodfill(cx,i,col);
			if(col==15)
			col=1;
		setcolor(GREEN);
		bar3d(m,n,b,v,DEPTH,TOPFLAG);
		bar3d(m1,n1,b1,v1,DEPTH1,TOPFLAG);
		
			//ATTACKING OBJECT
			if(bt==1)
			{
			circle(c,j,3);
			j-=10;
			
				if(j<=5)
				{
				bt=0;
				j=y-20;
				}
			}
			
				if(i>=y-35)	
				{
				lives-=1;
				break;
				}
				
				if(lives<=0)
				{
				outtextxy(x/2-100,y/2,"YOU LOST THE GAME NOOB!");
				outtextxy(x/2-170,y/2+20,"PRESS L KEY T0 EXIT OR ANY OTHER TO RESTART!");
				getch();
				ex=getch();
					if(ex=='l')
					{
					exit(0);
					}
					else
					{main();}
				}
				
				
					if(j<=i+10)
					{
						if(j>=i-10)
						{
							if(c>=cx-10)
							{
								if(c<=cx+10)
								{
								score+=1;
								break;
								
								}
							}	
						}
						
					}


			//MOVEMENT OF TANK
			if(kbhit())
			{
			kb=getch();
				switch(kb)
				{
				case 'a':	if(m<=8)
							break;
							bar3d(m-=8,n,b-=8,v,DEPTH,TOPFLAG);
							bar3d(m1-=8,n1,b1-=8,v1,DEPTH1,TOPFLAG);

							break;

				case 'd':	if(b>=x-13)
							break;
							bar3d(m+=8,n,b+=8,v,DEPTH,TOPFLAG);
							bar3d(m1+=8,n1,b1+=8,v1,DEPTH1,TOPFLAG);
							break;

				case 'p':	if(bt==0)
							{
							bt=1;
							c=m+10;
							}
							break;

				case 'q':	outtextxy(x/2-100,y/2,"PRESS 'Q' KEY TO EXIT!");
							getch();
						//	break;
							cleardevice();
							main();
						//	exit(0);
				default :	break;
				}
			}
		delay(30);
		}
	}
			getch();

			break;


	case 56: gotoxy(12,21);
			cout << "Thank You For Using My Program\n";
			gotoxy(12,22);
			cout<<"Press Any Key to Exit.";
			getch();
			break;


			default:
			gotoxy(12,21);
			cout << "Invalid Option!\n";
			gotoxy(12,22);
			cout<<"Press Any Key And Choose Your Option Again!";
			getch();
			break;

	}
	cleardevice();
	}
	while(val !=56);



closegraph();
}