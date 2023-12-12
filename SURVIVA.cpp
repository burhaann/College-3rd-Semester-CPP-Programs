#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	
	//DECLERATIONS OF VARIABLES
	int c,cx,x,y,i,j,bd,bt=0;
	int w,a,s,d;
	int m,n,v,b;
	int m1,n1,v1,b1;
	char kb,ex;
	int score=0,lives=5;
	int col=0;

	//MAXIMUM X-Y COORDINATES
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
		outtextxy(x/2+50,25,"Follow On Instagram @arhaanhamid");
		outtextxy(x/2+50,35,"Follow On Instagram @arhaanhamid");

		
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
							exit(0);
				default :	break;		
				}
			}
		delay(30);			
		}
	}
	
	
getch();
closegraph();
}