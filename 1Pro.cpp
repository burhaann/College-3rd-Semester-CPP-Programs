#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>

void main()
{

   int gd = DETECT, gm;
   int i,j,fact=1;
   int rev =0,rem,org,n;
   int val, val1, val2, val3;
   char con;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   do{
	setbkcolor(DARKGRAY);
	setcolor(LIGHTGRAY);
	//rectangle(10,50,627,407);
	//setfillstyle(SOLID_FILL,BLACK);
	//floodfill(10,50,RED);


	//RECTANGLE STAR BOX

	//rectangle(10,50,627,407);

	for(j=10;j<=620;j=j+10)
	{
	   outtextxy(j,50,"*");
	   // delay(20);
	}
	for(i=50;i<=400;i=i+10)
	{
	   outtextxy(620,i,"*");
	//   delay(20);
	}
	for(j=620;j>=10;j=j-10)
	{
	   outtextxy(j,400,"*");
	//   delay(20);
	}
	for(i=400;i>=50;i=i-10)
	{
	   outtextxy(10,i,"*");
      //	   delay(20);
	}



	//INSIDE BOX
	settextstyle(7, 0, 3);

	//TITLE
	outtextxy(50,70,"Addition-Factorial-Panlindrome Inside Box");
	line(35,100,600,100);

	//OPTIONS
	settextstyle(1, 0, 1);
	outtextxy(90,120,"1. Addition");
	outtextxy(90,150,"2. Factorial");
	outtextxy(90,180,"3. Pandolium");
	outtextxy(90,210,"4. About Developer");
	outtextxy(90,240,"5. Exit");

	line(35,280,600,280);
	line(35,310,600,310);

	//ENTER OPTION
	outtextxy(90,282,"ENTER YOUR OPTION : ");
	gotoxy(40,19);
	cin>>con;             {

			       }

	switch(con)
	{
	case 49: gotoxy(12,21);
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

			while( n!=0 )
			{
				rem = n%10;
				rev = rev*10 + rem;
				n /= 10;
			}

			if( org == rev )

			cout<<"The Palindrome Of Given Number Is : "<<rev<<"\n";
			else
			cout<<"The Given Number Is Not Palindrome.\n";

			gotoxy(12,24);
			cout<<"Press Any Key To Choose Another Option.";
			getch();

			break;

	case 52: gotoxy(12,21);
			cout<<"God Level Developer!\n";
			gotoxy(12,22);
			cout<<"Press Any Key To Choose Another Option.";
			getch();
			break;

	case 53: gotoxy(12,21);
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
	while(con!=53);




closegraph();
}