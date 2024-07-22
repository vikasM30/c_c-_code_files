#include<stdio.h>
#include<conio.h>
void r(int c)
{
	printf("%d\t",c);
	r(c+1);
}
void main()
{
	clrscr();
	r(1);
	getch();
}
