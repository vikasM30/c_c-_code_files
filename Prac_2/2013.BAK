#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	ofstream f;
	f.open("marks.dat",ios::app);
	char ch='y';
	int rno;
	float marks;
	while(ch=='y'||ch=='Y')
	{
		cout<<"enter the rno";
		cin>>rno;
		cout<<"enterthe marks";
		cin>>marks;
		f<<rno<<"\n"<<marks<<"\n";
		cout<<"want to enter more";
		cin>>ch;
	}
	f.close();
	return 0;
}