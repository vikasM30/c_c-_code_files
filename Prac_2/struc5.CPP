//by passing function//

#include<iostream.h>
#include<conio.h>
struct complex
{
	int x,y;
};
void input(complex&);
void add(complex,complex);
void sub(complex,complex);
void print(complex);
void main()
{
	clrscr();
	complex c1,c2;
	int m;
	cout<<"Program to input two complex numbers and adding or subtracting\n"
	    <<"depending upon the user's choice\n\n";
	cout<<"--------------------------------------------------------------\n\n";
	cout<<"Enter the first complex number\n";
	input(c1);
	cout<<"Enter the second complex number\n";
	input(c2);
	cout<<"Enter 1 for addition of complex number\n"
	    <<"Enter 2 for subtraction of complex number\n"
	    <<"Enter : ";
	cin>>m;
	cout<<"\n";
	switch(m)
	{
		case 1:  add(c1,c2);
			 break;
		case 2:  sub(c1,c2);
			 break;
		default :cout<<"Invalid choice";
	}
	getch();
}
void input(complex& m)
{
	cout<<"Enter the real part : ";
	cin>>m.x;
	cout<<"Enter the imaginary part : ";
	cin>>m.y;
}
void add(complex m,complex n)
{
	complex p;
	p.x=m.x+n.x;
	p.y=m.y+n.y;
	cout<<"\tThe result is : ";
	print(p);
}
void sub(complex m,complex n)
{
	complex p;
	p.x=m.x-n.x;
	p.y=m.y-n.y;
	cout<<"\tThe result is : ";
	print(p);
}
void print(complex p)
{
	cout<<"\t"<<p.x<<" + "<<"i"<<p.y;
}



