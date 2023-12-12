#include<stdio.h>
#include<conio.h>

int a[1],n,i;

void nu()
{
	printf("Enter The Value of N\n");
	scanf("%d",&n);
}

void s()
{
	printf("\nEnter %d Numbers\n",n);
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
}

void p()
{
	for (i=0;i<n;i++)
	{
	a[n+1]=(a[i]>a[i+1])?a[i]:a[i+1];
	printf("\nGreater Number = %d\n",a[i]);
	}

}

main()
	{
	clrscr();
	nu();
	s();
	p();
	getch();
	return 0;
	}