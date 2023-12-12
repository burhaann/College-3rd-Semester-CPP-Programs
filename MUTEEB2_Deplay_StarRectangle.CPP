
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

getch();
closegraph();
}