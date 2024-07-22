#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,n,sp,c;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=(2*n-r);sp++)
		printf(" ");
		for(c=1;c<=(2*r-1);c++)
		printf("*");
		printf("\n");
	}
	for(r=n-1;r>=1;r--)
	{
		for(sp=1;sp<=(2*n-r);sp++)
		printf(" ");
		for(c=1;c<=(2*r-1);c++)
		printf("*");
		printf("\n");
	}
	getch();
}

