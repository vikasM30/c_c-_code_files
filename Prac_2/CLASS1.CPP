#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
	int empno;
	char name[20];
	float sal;
	public:
	void input();
	void print();
};
void employee ::input()
{
	cout<<"enter the details of the employees : ";
	cout<<"\n\nemployee number : ";
	cin>>empno;
	cout<<"\nenter the name : ";
	gets(name);
	cout<<"\nenter the salary : ";
	cin>>sal;
}
void employee ::print()
{
	cout<<"\n\nemployee number : "<<empno;
	cout<<"\nname : "<<name;
	cout<<"\nsalary : "<<sal;
}
void main()
{
	clrscr();
	employee e;
	e.input();
	e.print();
	getch();
}
