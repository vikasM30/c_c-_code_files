#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int totdays,years,weeks,days,num1;
	printf("enter total number of days : ");
	scanf("%d",&totdays);
	years=totdays/365;
	num1=totdays%365;
	weeks=num1/7;
	days=num1%7;
	printf("years : %d",years);
	printf("weeks : %d",weeks);
	printf("days : %d",days);
	getch();
}