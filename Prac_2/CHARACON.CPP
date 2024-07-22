#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	if(ch>=48&&ch<=57)
	cout<<"you entered a DIGIT !!";
	else if(ch>=65&&ch<=90)
	cout<<"you entered a UPPER CASE !!";
	else if(ch>=97&&ch<=122)
	cout<<"you entered a LOWER CASE !!";
	else
	cout<<"you entered a SPECIAL CHARACTER !!";
	getch();
}