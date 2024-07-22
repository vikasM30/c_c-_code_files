#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=1,t,i,sign=1,n,s=0;
	printf("\n\nThe series is : 1  -4  7  -10  13  ........so on upto infinity\n");
	printf("\nEnter the number of terms you want find sum : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=a*sign;
		printf("%d \t",t);
		s=s+t;
		sign=(-1)*sign;
		a=a+3;
	}
	printf("\n\nsum is : %d",s);
	getch();
}