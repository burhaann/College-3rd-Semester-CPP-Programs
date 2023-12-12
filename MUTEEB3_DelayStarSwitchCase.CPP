#include<iostream.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>

void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
	for (j = 1; j <= m; j++)
	{
	    if (i == 1 || i == n ||
		j == 1 || j == m)
		cout << "*";
	    else
		cout << " ";
	}
	cout << endl;
    }

}


void main()
{
int gd=DETECT, gm=DETECT;
int i,x,y,z,p,q;
int choice;

char *ptr="nahruB naahrA nioM";
char u[1000];

clrscr();

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

int rows = 14

, columns = 80;
print_rectangle(rows, columns);

p=getmaxx();
q=getmaxy();
rectangle(0,3,p,q-52);



x=p/3;y=q/2;i=0;
while(ptr[i]!=NULL)
{
	u[0]=ptr[i];
	outtextxy(x,y,u);
	x=x+10;i++;
	delay(300);
}

delay(1000);
 do
 {
clrscr();
 cout << endl
 << " 1 - Two Number Sum Program\n"
 << " 2 - Factorial Of Numbers\n"
 << " 4 - To check Whether a Given Number is Palindrome.\n"
 << " 5 - Exit.\n"
 << " Enter your choice and press return: ";
 cin >> choice;

 switch (choice)
 {
 case 1:
 //code to start the game
 break;
 case 2:
 //code to make score for this game to count how many times u win the game
 break;
 case 3:
 //code to make option for the game
 break;
 case 4:
 //code to help the user like give him
 //extra information about the mode and the controller 
 break;
 case 5:
 cout << "End of Program.\nPress any key to exit.\n";
 break;
 default:
 cout << "Not a Valid Choice. \n"
 << "Choose again.\n";
 break;
 }
 }while (choice !=5);

getch();
closegraph();
}