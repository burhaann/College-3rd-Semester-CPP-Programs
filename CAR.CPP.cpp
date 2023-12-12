#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd = DETECT, gm;
	int i,j=0, con=0;


	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

	outtextxy(25,160,"Press Any key To See A Moving Car");
	getch();
	for(;;){

		for(i=0;i<=50;i++,j++)
		{

		//BODY
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

		if(i==50)
		break;
		if(j==15)
		j=2;

		cleardevice();
		}


	outtextxy(25,140,"Wanna Go For Another Ride");
	outtextxy(25,160,"Press 0 For NO and Any key For YES : ");
	cin>>con;
	if(con==0)
	break;
	}
	cout<<"Press Any key To Exit!";
	getch();

	closegraph();
}