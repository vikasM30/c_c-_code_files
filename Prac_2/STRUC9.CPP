//by returning a func.

#include<iostream.h>
#include<conio.h>
struct time
{
	int h,m,s;
};
void input(time&);
time add(time,time);
void print(time);
void main()
{
	clrscr();
	time T1,T2;
	cout<<"enter first time ";
	input(T1);
	cout<<"enter second time ";
	input(T2);
	time T=add(T1,T2);
	cout<<"\nfirst time is     :-\t ";
	print(T1);
	cout<<"\nsecond time is    :-\t ";
	print(T2);
	cout<<"\n\nResultant time is :-\t ";
	print(T);
	getch();
}
void input(time& X)
{
	cout<<"in hrs min & secs :- ";
	cin>>X.h>>X.m>>X.s;
}
void print(time X)
{
	cout<<X.h<<"hrs. : "<<X.m<<"mins. : "<<X.s<<"secs.";
}
time add(time t1,time t2)
{
	time T;
	T.h=t1.h+t2.h;
	T.m=t1.m+t2.m;
	T.s=t1.s+t2.s;
	if(T.s>=60)
	{
		T.s-=60;
		T.m++;
	}
	if(T.m>=60)
	{
		T.m-=60;
		T.h++;
	}
	return T;
}
