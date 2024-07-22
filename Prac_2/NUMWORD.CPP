#include<stdio.h>
#include<conio.h>
void word(int b)
{
	switch(b)
	{
		case 0: printf("zero "); break;
		case 1: printf("one "); break;
		case 2: printf("two "); break;
		case 3: printf("three "); break;
		case 4: printf("four "); break;
		case 5: printf("five "); break;
		case 6: printf("six "); break;
		case 7: printf("seven "); break;
		case 8: printf("eight "); break;
		case 9: printf("nine "); break;
	}
}
void main()
{
	clrscr();
	int a,b;
	printf("enter the number :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		word(b);
		a=a/10;
	}
	getch();
}