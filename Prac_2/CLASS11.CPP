#include<iostream.h>
#include<conio.h>
#include<math.h>
class point
{
	int x,y;
	public:
	void assign();
	void get(int,int);
	void input();
	void distance(point);
	void print();
};
void point ::assign()
{
	x=5;
	y=6;
}
void point ::get(int a, int b)
{
	x=a;
	y=b;
}
void point ::input()
{
	cout<<"enter the value of x and y :";
	cin>>x>>y;
}
void point ::print()
{
	cout<<"x-coordinate :"<<x<<"\n"<<"y-coordinate :"<<y;
}
void point ::distance(point p)
{
	float d=sqrt(pow((x-p.x),2)+pow((y-p.y),2));
	cout<<"the distance between the points is :"<<d;
}
void main()
{
	clrscr();
	point p;
	p.print();
	p.distance(point);
	getch();
}