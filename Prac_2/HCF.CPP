#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,s,i,hcf;
	printf("\nEnter the numbers : ");
	scanf("%d   %d",&a,&b);
	if(a>b)
		s=a;
	else
		s=b;
	for(i=1;i<=s;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
		}
	}
	printf("\n\nH C F is : %d",hcf);
	getch();
}