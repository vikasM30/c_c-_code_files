#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int m[3],total;
	float perc;
	char grade;
};
void main()
{
	clrscr();
	student s;
	int i;
	cout<<"enter the details of students :";
	cout<<"\nenter the rno : ";
	cin>>s.rno;
	cout<<"enter the name : ";
	gets(s.name);
	s.total=0;
	for(i=0;i<3;i++)
	{
		cout<<"enter the marks of student :"<<i+1<<"\t";
		cin>>s.m[i];
		s.total+=s.m[i];
	}
	s.perc=s.total/3.0;
	if(s.perc>=90)
		s.grade='A';
	else if(s.perc>=75)
		s.grade='B';
	else if(s.perc>=60)
		s.grade='C';
	else if(s.perc>=50)
		s.grade='D';
	else if(s.perc>=35)
		s.grade='E';
	else
		s.grade='F';
	  cout<<"\tname\t\tpercentage\t\tgrade\n";
	  cout<<"\n";
	  cout<<"\t"<<s.name<<"\t\t"
	      <<s.perc<<"\t\t\t"
	      <<s.grade<<"\n";
	  getch();
}