#include<iostream.h>
#include<conio.h>
class x
{
	int codeno;
	float price;
	static int count;
	public:
	void getval(int i,float j)
	{
		codeno=i;
		price=j;
		++count;
	}
	void display()
	{
		cout<<"\n\n\ncode : "<<codeno;
		cout<<"\nprice : "<<price;
	}
	static void x ::dispcount()
	{
		cout<<"count = "<<count;
	}
};
int x ::count=0;
void main()
{
	clrscr();
	x ob1,ob2;
	ob1.getval(101,25.75);
	cout<<"\n";
	ob2.getval(102,38.40);
	cout<<"\n";
	x ::dispcount();
	x ob3;
	ob3.getval(103,95.60);
	cout<<"\n";
	x ::dispcount();
	ob3.display();
	cout<<"\n";
	ob2.display();
	cout<<"\n";
	ob1.display();
	getch();
}