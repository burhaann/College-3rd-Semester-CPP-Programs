#include<iostream.h>
#include<conio.h>

void main()

{
	int no,space,a,num,i;

clrscr();

	cout<<"Enter the Value of N\t:\n";
	cin>>no;
	space=no;

for (i=1;i<=no;i++)
{
	num=i;

		for (a=1;a<=space;a++)
		cout<<" ";
		space--;

		for (a=1;a<=i;a++)
		{
		cout<<num;
		num++;
		}
		num--;
		num--;

		for (a=1;a<=i;a++)
		{
		cout<<num;
		num--;
		}
		cout<<"\n";

}
getch();
}