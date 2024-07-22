#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=1,t,i,sign=-1,n,s=0,c=0;
	printf("\n\nThe series is : -1  -4  7  10  -13  -16  ........so on upto infinity\n");
	printf("\nEnter the number of terms you want find sum : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=a*sign;
		printf("%d \t",t);
		s=s+t;
		c++;
		a=a+3;
		if(c==2)
		{
			sign=(-1)*sign;
			c=0;
		}
	}
	printf("\n\nsum is : %d",s);
	getch();
}