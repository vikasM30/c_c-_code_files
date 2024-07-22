#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=0,b=1,c,i,s=1,n;
	printf("\nEnter the number of terms : ");
	scanf("%d",&n);
	printf("\n\nThe series is : \n");
	printf("%d %d ", a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d \t",c);
		a=b;
		b=c;
		s=s+c;
	}
	printf("\n\nsum is : %d",s);
	getch();
}