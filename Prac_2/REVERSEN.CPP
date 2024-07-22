#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,m=0;
	printf("enter the number :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		m=b+(m*10);
		a=a/10;
	}
	printf("reverse is : %d",m);
	getch();
}