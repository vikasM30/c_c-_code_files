#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,s,i,lcm;
	printf("\nEnter the numbers : ");
	scanf("%d   %d",&a,&b);
	if(a>b)
		s=a;
	else
		s=b;
	for(i=s;i<=(a*b);i++)
	{
		if(i%a==0&&i%b==0)
		{
			lcm=i;
			break;
		}
	}
	printf("\n\L C M is : %d",lcm);
	getch();
}