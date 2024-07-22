#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("greater is:%d",a);

	else

		printf("greater is:%d",b);

	getch();
}
