#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char ch;
	ifstream f;
	f.open("marks.dat",ios::in);
	if(!f)
	{
		cout<<"file can't be opened!!\n";
	}
	while(f)
	{
		f.get(ch);
		cout<<ch;
	}
	f.close();
	getch();
}
















































