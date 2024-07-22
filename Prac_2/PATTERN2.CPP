#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,s,c;
	for(r=0;r<=4;r++)
	{
		for(s=1;s<=(4-r);s++)
		printf(" ");
		for(c=r;c>=0;c--)
		printf("%d",c);
		for(c=1;c<=r;c++)
		printf("%d",c);
		printf("\n");
	}
	getch();
}