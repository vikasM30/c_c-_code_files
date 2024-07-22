#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int hr,min,sec;
	printf("enter the time in seconds : ");
	scanf("%d",&sec);
	hr=sec/3600;
	min=(sec%3600)/60;
	sec=(sec%3600)%60;
	printf("\ntime in hours is : %d",hr);
	printf("\ntime in minutes is : %d",min);
	printf("\ntime in seconds is : %d",sec);
	getch();
}