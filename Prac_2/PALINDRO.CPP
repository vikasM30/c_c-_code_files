#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c=0,k;
	printf("enter any number");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		k=a%10;
		c=(c*10)+k;
		a=a/10;
	}
	if(b==c)
	printf("no is palindrome");
	else
	printf("no is not a palindrome");
	getch();
}