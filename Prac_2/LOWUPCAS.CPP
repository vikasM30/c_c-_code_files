#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf("enter a character : ");
	scanf("%c",&ch);
	if(ch>=48&&ch<=57)
	printf("you enterded a digit");
	else if(ch>=65&&ch<=90)
	printf("you entered a upper case alphabet");
	else if(ch>=97&&ch<=122)
	printf("you entered a lower case alphabet");
	else
	printf("you entered a special character");
	getch();
}