#include<stdio.h>
#include<conio.h>
void main()
{
int a, b, c, i, j;
clrscr();
printf("enter any number");
scanf("%d", &a);
for(i=1; a!=0; i++)
{
c=a%10;
a=a/10;
}
printf("%d", i-1);
getch();
}