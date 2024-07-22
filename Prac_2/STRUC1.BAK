#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	int empno;
	float hra,bp,da,gp,pf,np,it;
	struct name
	{
		char fname[20],lname[20];
	}empname;
	struct date
	{
		int dd,mm,yy;
	}doj;
	struct address
	{
		int hno;
		char street[20],city[10],state[20];
	}addr;
};
void sort (employee);
void input(employee&);
void calculate(employee&);
void print(employee);
void main()
{
	clrscr();
	employee e[10];
	int n;
	cout<<"enter the number of employees : ";
	cin>>n;
	cout<<"\nenter the particulars : ";
	for(int i=0;i<n;i++)
	{
		input(e[i]);
		calculate(e[i]);
	}
	for(i=0;i<n;i++)
	print(e[i]);
	getch();
}
void input(employee& e)
{
	cout<<"\n\nenter the employee number : ";
	cin>>e.empno;
	cout<<"\nenter the first name : ";
	gets(e.empname.fname);
	cout<<"\nenter the surname : ";
	gets(e.empname.lname);
	cout<<"\ndate of joining : ";
	cin>>e.doj.dd>>e.doj.mm>>e.doj.yy;
	cout<<"\nenter the address : ";
	cout<<"\n\nhouse number : ";
	cin>>e.addr.hno;
	cout<<"\nstate : ";
	gets(e.addr.state);
	cout<<"\ncity : ";
	gets(e.addr.city);
	cout<<"\nstreet : ";
	gets(e.addr.street);
	cout<<"\nbasic pay : ";
	cin>>e.bp;
}
void calculate(employee& e)
{
	e.da=0.6*e.bp;
	e.hra=0.125*e.bp;
	e.gp=e.da+e.hra+e.bp;
	e.it=0.1*e.gp;
	e.pf=800;
	e.np=e.gp-e.it-e.pf;
}
void print(employee e)
{
	cout<<"\n\nemployee number : "<<e.empno;
	cout<<"\nname : "<<e.empname.fname<<"  "<<e.empname.lname;
	cout<<"\ndate of joning : "<<e.doj.dd<<" : "<<e.doj.mm<<" : "<<e.doj.yy;
	cout<<"\naddress : "<<"\n\nhouse number : "<<e.addr.hno;
	cout<<"\nstate : "<<e.addr.state;
	cout<<"\ncity : "<<e.addr.city;
	cout<<"\nstreet : "<<e.addr.street;
	cout<<"\n\nnet payment is : \n"<<e.np;
}
void sort(employee e[],int n)
{
	int i,j;
	employee a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(e[i].np<e[j].np)
			{
				a=e[j];
				e[j]=e[i];
				e[i]=a;
			}
		}
	}

}