#include<iostream.h>
#include<conio.h>
struct point
{
	int x,y;
};
void show (point P)
{
	cout<<P.x<<":"<<P.y<<endl;
}
void main()
{
	clrscr();
	point U={20,10},V,W;
	V=U;	V.x+=20;
	W=V;	U.y+=10;
	U.x+=5;	W.x-=5;
	show(U);	show(V);
	show(W);
	getch();
}