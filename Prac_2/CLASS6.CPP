#include<iostream.h>
#include<conio.h>
#include<math.h>
class clock
{
	long int min,hr,sec;
	public:
	void readtime();
	void showtime();
	void addtime(clock);
	void subtime(clock);
};
void clock ::readtime()
{
	cout<<"enter the time in hours , minutes and seconds : ";
	cin>>hr;
	cin>>min;
	cin>>sec;
}
void clock ::showtime()
{
	cout<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds";
}
void clock ::addtime(clock c)
{
	clock r;
	r.hr=c.hr+hr;
	r.min=c.min+min;
	r.sec=c.sec+sec;
	if(r.min>=60)
	{
		r.min%=60;
		r.hr++;
	}
	if(r.sec>=60)
	{
		r.sec%=60;
		r.min++;
	}
	cout<<"\n\nthe resultant time is : ";
	r.showtime();
}
void clock ::subtime(clock c)
{
	clock r;
	long int t;
	long int t1=hr*60*60+min*60+sec;
	long int t2=c.hr*60*60+c.min*60+c.sec;
	if(t1>t2)
	t=t1-t2;
	else
	t=t2-t1;
	r.hr=t/3600;
	t=t%3600;
	r.min=t/60;
	r.sec=t%60;
	cout<<"\n\ntime elapsed during two given time is : ";
	r.showtime();
}
void main()
{
	clrscr();
	clock a,b;
	int ch;
	a.readtime();
	b.readtime();
	cout<<"enter the choice : ";
	cout<<"1. for addition\n\t\t   2. for subtraction\n";
	cin>>ch;
	switch(ch)
	{
		case 1 : a.addtime(b);
			 break;
		case 2 : a.subtime(b);
			 break;
		default : cout<<"invalid choice";
	}
	getch();
}