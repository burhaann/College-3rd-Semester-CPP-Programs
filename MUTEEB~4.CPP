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
int num1,num2;
long double fact=1,number;
int n, num, digit, rev = 0;

char *ptr="Arhaan Burhan Moin";
char u[1000];

clrscr();

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

int rows = 13, columns = 80;
print_rectangle(rows, columns);

p=getmaxx();
q=getmaxy();
rectangle(0,3,p,q-82);
circle((p/2)-20,(q/2)-50,150);
circle((p/2)-20,(q/2)-50,160);



	x=p/3;y=(q/2)-50;i=0;

	while(ptr[i]!=NULL)
		{
		u[0]=ptr[i];
		outtextxy(x,y,u);
		x=x+10;i++;
		delay(300);
		}

	delay(2000);

		do
		{
		clrscr();
		setbkcolor(DARKGRAY);
		setcolor(WHITE);
		cout << endl
		<< " 1 - Two Number Sum Program\n"
		<< " 2 - Factorial Of Numbers\n"
		<< " 3 - Product of two Numbers\n"
		<< " 4 - To check Whether a Given Number is Palindrome.\n"
		<< " 5 - Press 5 for fetching our Roll Numbers\n"
		<< " 6 - Exit.\n"
		<< " Enter your choice and press return: \n";
		cin >> choice;

	switch (choice)
		{
		case 1:
			{
			cout<<"Enter Two Numbers:";
			cin>>num1>>num2;
			cout<<num1+num2;
			getch();
			}
		break;

		case 2:
			{
			cout<<"Enter any Number: ";
			cin>>number;
			for(i=1;i<=number;i++){
			fact=fact*i;
			}
			}
			cout<<"Factorial of " <<number<<" is: "<<fact<<endl;
			getch();
		break;

		case 3:

			{
			cout<<"Enter Two Numbers:";
			cin>>num1>>num2;
			cout<<num1*num2;
			getch();
			}
		break;
		break;

		case 4:
			cout << "Enter a positive number: ";
			cin >> num;

			n = num;

		do
		{
			digit = num % 10;
			rev = (rev * 10) + digit;
			num = num / 10;
			} while (num != 0);

		cout << " The reverse of the number is: " << rev << endl;

		if (n == rev)
			cout << " The number is a palindrome.";
		else
			cout << " The number is not a palindrome.";
		       getch();
		break;


		case 5:
		cout << "Moin Khan : 182116.\nSuham Hamid : 182115\nBurhaan Ahmad : 182106";
		getch();

		break;

		case 6:
		cout << "End of Program.\nPress Any Key to Exit.";
		break;



		default:
			cout << "Not a Valid Choice. \n"
			<< "Choose again.\n";
			getch();
		break;

		}
		}while (choice !=6);

getch();
closegraph();
}