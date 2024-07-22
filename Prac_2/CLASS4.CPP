#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
	int rno;
	char name[30];
	int m[3];
	float per;
	char grade;
	public:
	void cal();
	void input();
	float percent(){return per;}
	void print();
};
void sort(student[],int);
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
	if(per>=90)
	grade='A';
	else if(per>=75)
	grade='B';
	else if(per>=50)
	grade='C';
	else if(per>=35)
	grade='D';
	else
	grade='E';
}
void student ::print()
{
	cal();
	cout<<rno<<"\t\t"<<name<<"\t"<<per<<"\t\t"<<grade<<"\n";
}
void sort(student s[],int n)
{
	int i,j;
	student a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (s[i].percent()<s[j].percent())
			{
				a=s[j];
				s[j]=s[i];
				s[i]=a;
			}
		}
	}
}
void main()
{
	clrscr();
	student s[100];
	int n,i;
	cout<<"enter the number of students";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].input();
	       s[i].cal( );
	}
	sort(s,n);
	cout<<"\n\nROLL NUMBER\tNAME\tPERCENTAGE\tGRADE\n\n";
	for(i=0;i<n;i++)
	s[i].print();
	getch();
}



