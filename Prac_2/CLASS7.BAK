#include<iostream.h>
#include<conio.h>
class distance
{
	int ft,in;
	public:
	void getdata(int f,int i)
	{
		ft=f;in=i;
	}
	void print(void)
	{
		cout<<ft<<" feet "<<in<<" inches"<<"\n";
	}
	distance sum(distance d2);
};
distance distance ::sum(distance d2)
{
	distance d3;
	d3.ft=ft+d2.ft+(in+d2.in)/12;
	d3.in=(in+d2.in)%12;
	return(d3);
}
void main()
{
	clrscr();
	distance l1,l2,tot;
	int m,n;
	cout<<"enter the first length in feet and inches : ";
	cin>>m;
	cout<<"enter the second length in feet and inches : ";
	cin>>n;
	l1.getdata(m,n);
	l2.getdata(m,n);
	tot=l1.sum(l2);
	cout<<"length 1 : ";
	l1.print();
	cout<<"length 2 : ";
	l2.print();
	cout<<"total length : ";
	tot.print();
	getch();
}
