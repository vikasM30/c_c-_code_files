#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class tour
{
	char tcode[20];
	int no_of_adults;
	int no_of_kids;
	int km;
	float total_fare;
	public :
	tour()
	{
		strcpy(tcode,"null");
		no_of_adults=0;
		no_of_kids=0;
		km=0;
		total_fare=0;
	}
	void assign_fair()
	{
		float fare=0;
		if(km>=1000)
		fare=no_of_adults*500+no_of_kids*250;
		else if(km>=500)
		fare=no_of_adults*300+no_of_kids*150;
		else
		fare=no_of_adults*200+no_of_kids*100;
		total_fare=fare;
	}
	void enter()
	{
		cout<<"enter the tour code";
		cin>>tcode;
		cout<<"enter the number of adults";
		cin>>no_of_adults;
		cout<<"enter the number of kids";
		cin>>no_of_kids;
		cout<<"enter the distance";
		cin>>km;
		assign_fair();
	}
	void display()
	{
		cout<<"tour code :"<<tcode<<endl;
		cout<<"no of adults :"<<no_of_adults<<endl;
		cout<<"no of kids :"<<no_of_kids<<endl;
		cout<<"distance :"<<km<<endl;
		cout<<"total fare :"<<total_fare<<endl;
	}
};
void main()
{
	clrscr();
	tour k;
	k.enter();
	k.display();
	getch();
}


