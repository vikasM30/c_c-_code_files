//using single file//

#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	ofstream f1("student",ios::out);
	char name[30],ch;
	float marks=0.0;
	for(int i=0;i<3;i++)
	{
		cout<<"\n\tStudent "<<(i+1)<<" name : ";
		cin.get(name,30);
		cout<<"\n\tMarks :";
		cin>>marks;
		cin.get(ch);
		f1<<name<<"\n"<<marks<<"\n";
	}
	f1.close();
	ifstream f2("student",ios::in);
	f2.seekg(0);
	cout<<"\n";
	for(i=0;i<3;i++)
	{
		f2.get(name,30);
		f2.get(ch);
		f2>>marks;
		f2.get(ch);
		cout<<"\n\n\n\tStudent Name : "<<name;
		cout<<"\tMarks : "<<marks<<"\n";
	}
	f2.close();
	getch();
}