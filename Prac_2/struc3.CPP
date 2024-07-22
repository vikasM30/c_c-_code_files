#include<iostream.h>
#include<conio.h>
#include<math.h>
struct point
{
	int x,y;
};
void main()
{
	clrscr();
	point p1,p2;
	double d;
	cout<<"calculate the distance between \n \t\tP*----------------------*Q";
	cout<<"\n\nenter the coordinates of 2D plane and get the distance between them\n\n";
	cout<<"\nenter the coordinate of P : ";
	cin>>p1.x>>p1.y;
	cout<<"\nenter the coordinate of Q : ";
	cin>>p2.x>>p2.y;
	d=sqrt(pow((p1.x+p1.y),2)+pow((p2.x+p2.y),2));
	cout<<"\n\nthe distance between the two points are : ";
	cout<<d;
	getch();
}