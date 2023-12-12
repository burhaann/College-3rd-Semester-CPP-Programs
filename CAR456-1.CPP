#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>

void main()
{
	int gd = DETECT, gm;
	int i,j=0,a;
	char con;



	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	settextstyle(0,0,1);


	outtextxy(25,160,"Press Any key To See A Moving Car");
	getch();

	for(;;){

		for(i=0;i<=200;i=i+2,j++)
		{

		//BODY
//		setbkcolor(250,100,GREEN);
		rectangle(300-i,180,600-i,300);

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

		if(i==20)
		break;
		if(j==15)
		j=2;

		cleardevice();
		}

	outtextxy(25,140,"Wanna Go For Another Ride");
	outtextxy(25,160,"Type Any Number For YES and Any Alphabet For NO : ");

	cin>>con;
	if(con==48)
	break;
	}
	cout<<"Press Any key To Exit!";
	getch();

	closegraph();
}