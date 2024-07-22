#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class toys
{
	char tcode[5];
	protected:
	float price;
	void assign(float)
	{
		price=0;
	}
	public:
	toys()
	{
		price=0;
	}
	void TEntry()
	{
		cout<<"enter the code ";
		cin>>tcode;
		cout<<"enter the price";
		cin>>price;
	}
	void TDisplay()
	{
		cout<<"PRICE :"<<price;
	}
}t;
class softtoys : public toys
{
	char STName[20];
	float weight;
	public :
	soft toys()
	{
		weight=0;
	}
	void STEntry()
	{
		cout<<"enter the name";
		gets(STName);
		cout<<"enter the weight";
		cin>>weight;
	}
	void STDisplay()
	{
		cout<<"name :"<<STName;
		cout<<"weight "<<weight;
	}
}s;
class electronictoys : public toys
{
	char ETName[20];
	int no_of_batteries;
	public:
	electronic toys()
	{
		no_of_batteries=0;
	}
	void ETEntry()
	{
		cout<<"enter the name ";
		gets(ETName);
		cout<<"enter no of batteries ";
		cin>>no_of_batteries;
	}
	void ETDisplay()
	{
		cout<<"name :"<<ETName;
		cout<<"no of batteries :"<<no of batteries;
	}

}e;
void main()
{
	clrscr();
	toys a;
	softtoys b;

	getch();
}
