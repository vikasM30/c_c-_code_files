#include<iostream.h>
#include<conio.h>
#include<math.h>
class clock
{
	int min,hr;
	public:
	void readtime();
	void showtime();
	void addtime(clock);
	void subtime(clock);
};
void clock ::readtime()
{
	cout<<"enter the time in hours and minutes : ";
	cin>>hr;
	cin>>min;
}
void clock ::showtime()
{
	cout<<hr<<" hours "<<min<<" minutes";
}
void clock ::addtime(clock c)
{
	clock r;
	r.hr=c.hr+hr;
	r.min=c.min+min;
	if(r.min>=60)
	{
		r.min%=60;
		r.hr++;
	}
	cout<<"\n\nthe resultant time is : ";
	r.showtime();
}
void clock ::subtime(clock c)
{
	clock r;
	int t1=hr*60+min;
	int t2=c.hr*60+c.min;
	int t=abs(t1-t2);
	r.hr=t/60;
	r.min=t%60;
	cout<<"\n\ntime elapsed during two given time is : ";
	r.showtime();
}
void main()
{
	clrscr();
	clock a,b;
	a.readtime();
	b.readtime();
	a.addtime(b);
	a.subtime(b);
	getch();
}
