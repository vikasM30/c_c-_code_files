#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char n[20],b[12],c[50];
	int r,age;
	printf("enter your roll number : ");
	scanf("%d",&r);
	printf("enter your name : ");
	scanf("%s",&n);
	printf("enter your age : ");
	scanf("%d",&age);
	printf("enter your branch : ");
	scanf("%s",&b);
	printf("enter your college : ");
	scanf("%s",&c);
	printf("\n\nyour details are : \n\n");
	printf("Roll Number : %d ",r);
	printf("\nName : %s ",n);
	printf("\nAge : %d ",age);
	printf("\nBranch : %s ",b);
	printf("\nCollege : %s ",c);
	getch();
}


