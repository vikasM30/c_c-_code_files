#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped number are : %d%d",a,b);
	getch();
}