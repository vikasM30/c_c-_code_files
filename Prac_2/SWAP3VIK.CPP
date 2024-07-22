#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swapped value are : %d%d",a,b) ;
	getch();
}