#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
struct stu
{
	int rno;
	char name[30];
	float m1,m2,m3;
};
void main()
{
	stu s;
	clrscr();
	char ch,chh;
	cout<<"	\n\n\t\tFile Name :- 'stu.dat' \n\n\n";
	cout<<"\tMAIN MENU\n\n";
	cout<<"\t1.Create Record\n";
	cout<<"\t2.Read Record\n";
	cout<<"\t3.Delete Record\n";
	cout<<"\t4.Modify Record\n";
	cout<<"\t5.Search Record\n";
	cout<<"\n\nEnter Your Choice :- ";
	cin>>chh;
	switch(chh)
	{
		case '1': fstream f1("stu.dat",ios::binary|ios::out|ios::in);
			  if(!f1)
			  cout<<"file can't be created";
			  else
			  {
				  do
				  {
					  cout<<"enter the roll number";
					  cin>>s.rno;
					  cout<<"enter the name";
					  gets(s.name);
					  cout<<"enter the marks";
					  cin>>s.m1>>s.m2>>s.m3;
					  f1.write((char*)&s,sizeof(s));
					  cout<<"want to enter more records ";
					  cin>>ch;
				  }while(ch=='y'||ch=='Y');
				  f1.close();
			  }break;
		case '2': fstream f2("stu.dat",ios::binary|ios::in|ios::out);
			  if(!f2)
			  cout<<"file can't be created";
			  else
			  {
				  while(!f2.eof())
				  {
					  f1.read((char*)&s,sizeof(s));
					  cout<<s.rno<<'\t'<<s.name<<'\t'<<s.m1<<'\t'<<s.m2<<'\t'<<s.m3<<'\n';
				  }
			  }break;
		default : cout<<"invalid choice";
	}
	getch();
}

