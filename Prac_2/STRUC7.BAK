//error//


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
const int pf=800;
struct enployee
{
       int empno;
       float bp,da,hra,it,pf,grosspay,netpay;
       struct name
       {
		char fname[15],lname[15];
       }empname;
       struct date_of_joining
       {
		int dd,mm,yy;
       }doj;
       struct address
       {
		int hno;
		char street[20],city[15],state[15];
	}addr;
};
void input(employee&);
void print(employee);
void calculate(employee&);
void sort(employee);
void main()
{
	clrscr();
	employee e[10];
	int n;
	cout<<"enter the number of employees : ";
	cin>>n;
	cout<<"enter the particulars ";
	for(int i=0;i<n;i++)
	{
		input(e[i]);
		calculate (e[i]);
	}
	cout<<"\n\nempno\tname\tdate of joining\taddress\tnet pay\n";
	for(int i=0;i<n;i++)
	{
		print(e[i]);
	}
	getch();
}
void input(employee& X)
{
	cout<<"enter the roll no.";
	cin>>X.rno;
	cout<<"enter the name : ";
	cout<<"\nfirst name : ";
	gets(X.empname.fname);
	cout<<"\nlast name : ";
	gets(X.empname.lname);
	cout<<"\nenter the date of joining : ";
	cout<<"date : ";
	cin>>X.doj.dd;
	cout<<"month : ";
	cin>>X.doj.mm;
	cout<<"year : ";
	cin>>X.doj.yy;
	cout<<"\nenter the address : ";
	cout<<"\nhouse no. : ";
	cin>>X.addr.hno;
	cout<<"\nstate : ";
	gets(X.addr.state);
	cout<<"\ncity : ";
	gets(X.addr.city);
	cout<<"\nstreet : ";
	gets(X.addr.street);
	cout<<"\nenter the basic pay : ";
	cin>>X.addr.bp;
	cout<<"\nenter da : ";
	cin>>X.addr.da;
	cout<<"\nenter hra : ";
	cin>>X.addr.hra;
	cout<<"\nenter it : ";
	cin>>X.addr.it;
	cout<<"\nenter pf : ";
	cin>>X.addr.pf;
}
void print(employee X)
{
	cout<<"\n"<<X.rno<<"\t";
	for(int i=0;X.empname.fname[i]!='\0';i++)
	{
		cout<<X.empname.fname[i];
		cout<<' ';
	}
	for(int i=0;X.empname.lname[i]!='\0';i++)
	{
		cout<<X.empname.lname[i];
	}
	cout<<"date : "<<X.doj.dd<<"month : "<<X.doj.mm<<"year : "<<X.doj.yy;
	cout<<"\nhouse no. : "<<X.addr.hno;
	for(i=0;X.addr.state[i]!='\0';i++)
	{
		cout<<X.addr.state[i];
		cout<<"\n";
	}
	for(i=0;X.addr.city[i]!='\0';i++)
	{
		cout<<X.addr.city[i];
		cout<<"\n";
	}
	for(i=0;X.addr.street[i]!='\0';i++)
	{
		cout<<X.addr.street[i];
	}
	cout<<"\nnet pay : "<<X.addr.netpay;
}
void calculate(employee& X)
{
	X.da=(0.6)*(X.bp);
	X.hra=(0.125)*(X.bp);
	X.grosspay=X.bp+X.da+X.hra;
	X.it=(0.1)*(X.grosspay);
	X.netpay=X.bp+X.da+X.hra-X.it-X.pf;
}
void sort(employee e[],int n)
{
	int i,j;
	employee a;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(e[i].p<e[j].p)
			{
				a=e[j];
				e[j]=e[i];
				e[i]=a;
			}
		}
	}
}


