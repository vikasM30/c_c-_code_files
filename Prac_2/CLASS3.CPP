#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	int rno;
	char name[30];
	int m[3];
	float per;
	void input();
	void cal();
	public:
	void print();
};
void student ::input()
{
	cout<<"enter the roll no : ";
	cin>>rno;
	cout<<"enter the name : ";
	gets(name);
	cout<<"enter the marks in three subjects (less than 100) : ";
	for(int i=0;i<3;i++)
	{
		cin>>m[i];
	}
}
void student ::cal()
{

	int t=0;
	for(int i=0;i<3;i++)
	t+=m[i];
	per=t/3.0;
}
void student ::print()
{
	input();
	cal();
	cout<<"\n\nroll number : "<<rno;
	cout<<"\nname : "<<name;
	cout<<"\n\npercentage : "<<per;
}
void main()
{
	clrscr();
	student s;
	s.print();
	getch();
}



