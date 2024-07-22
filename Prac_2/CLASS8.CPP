#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
class garments
{
	char code[25];
	char type[25];
	int size;
	char fabric[25];
	float price;
	void assign()
	{
		if(strcmp(fabric,"COTTON")==0)
		{
			if(strcmp(type,"TROUSERS")==0)
				price=1300;
			else
				if(strcmp(type,"SHIRT")==0)
					price=1100;
		}
		else
		{
			if(strcmp(type,"TROUSERS")==0)
				price=1300-0.10*1300;
			else
				if(strcmp(type,"SHIRT")==0)
					price=1100-0.10*1100;
		 }
	}
	public :
	void garment()
	{
		strcpy(code,"NOT ALLOTED");
		strcpy(type,"NOT ALLOTED");
		strcpy(fabric,"NOT ALLOTED");
		size=0;
		price=0;


	}
	void input()
	{
		cout<<"Enter the Garment Code : ";
		cin>>code;
		cout<<"\nEnter the Garment Type (TROUSERS/SHIRT) in Bold Letters : " ;
		gets(type);
		cout<<"\nEnter the Garment Size : ";
		cin>>size;
		cout<<"\nEnter the Garment Fabric in Bold Letters : ";
		gets(fabric);
		assign();
	}
	void print()
	{       cout<<"\n\n==================================================";
		cout<<"\n\nGarment Code   : "<<code<<endl;
		cout<<"Garment Type   : "<<type<<endl;
		cout<<"Garment Size   : "<<size<<endl;
		cout<<"Garment Fabric : "<<fabric<<endl;
		cout<<"Garment Price  : "<<price<<endl;
	}
};
void main()
{
	clrscr();
	garments g;
	g.garment();
	g.input();
	g.print();
	getch();
}