//BY ARRAY OF STRUCTURES//

#define N 100
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int m1,m2,m3,total;
	float perc;
	char grade;
};
void input(student&);
void print(student);
void calculate(student&);
void sort(student[],int);
void main()
{
	clrscr();
	student s[N];
	int i,n;
	cout<<"enter the number of students <=100 ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the details of student :"<<i+1;
		input(s[i]);
		calculate(s[i]);
	 }
	sort(s,n);
	cout<<"the sorted merit list is\n";
	for(i=0;i<n;i++)
	{
		print(s[i]);
	}
	getch();

}
void input(student& a)
{
	cout<<"\nenter the roll number : ";
	cin>>a.rno;
	cout<<"\nenter the name : ";
	gets(a.name);
	cout<<"\nenter the marks in three subjects : ";
	cin>>a.m1>>a.m2>>a.m3;
}
void print(student a)
{
	cout<<"roll no.\t\tname\t\tpercentage\tgrade\n";
	if(a.perc>=90)
		a.grade='A';
	else if(a.perc>=75)
		a.grade='B';
	else if(a.perc>=60)
		a.grade='C';
	else if(a.perc>=50)
		a.grade='D';
	else if(a.perc>=35)
		a.grade='E';
	else

		a.grade='F';
	cout<<a.rno;
	for(int i=0;i<1;i++)
	{
		cout<<"\t\t\t"<<a.name<<"\t\t"
		    <<a.perc<<"\t\t"
		    <<a.grade<<"\n";
	}
}
void calculate(student& a)
{
	a.total=a.m1+a.m2+a.m3;
	a.perc=a.total/3.0;
}
void sort(student s[],int n)
{
	student a;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=j+1;j<n;j++)
		{
			if(s[i].perc<s[j].perc)
			{
				a=s[i];
				s[i]=s[j];
				s[j]=a;
			}
		}
	}
}