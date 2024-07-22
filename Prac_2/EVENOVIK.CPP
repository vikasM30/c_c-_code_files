#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%2==0)
	printf("number is even");
	else
	printf("number is odd");
	getch();
}