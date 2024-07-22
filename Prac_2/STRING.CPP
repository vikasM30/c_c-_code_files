#include<stdio.h>
#include<conio.h>
#include<string.h>
void rev_string(char s,int st,int end)
{
	char t;
	t=s[st];
	s[st]=s[end];
	s[end]=t;
	rev_string(s,st+1,end-1);
}
void main()
{
	clrscr();
	char s[50];
	int l;
	printf("enter the string: ");
	scanf("\n%s",&s);
	l=strlen(s);
	rev_string(s,0,l-1);
	printf("\nThe reverse string is : %s",s);
	getch();
}