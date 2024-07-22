#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
struct stu
{
	int rno;
	char name[30],n[30];
	int m1,m2,m3;
}s;
void Create();
void Read();
void Delete();
void Modify();
void Search1();
void Search2();
void Append();
void Create()
{
	char ch;
	ofstream f1("stu.dat",ios::binary);
	if(!f1)
	cout<<"\nfile can't be created";
	else
	{
		do
		{
			cout<<"\nenter the roll number\t";
			cin>>s.rno;
			cout<<"\nenter the name\t";
			gets(s.name);
			cout<<"\nenter the marks\t";
			cin>>s.m1>>s.m2>>s.m3;
			f1.write((char*)&s,sizeof(s));
			cout<<"\nwant to enter more records\t ";
			cin>>ch;
		}while(ch=='y'||ch=='Y');
		f1.close();
	}
}
void Read()
{
	ifstream f2("stu.dat",ios::binary);
	if(!f2)
		cout<<"\nfile can't be created";
	else
	{
		f2.read((char*)&s,sizeof(s));
		while(f2)
		{
			  cout<<s.rno<<'\t'<<s.name<<'\t'<<s.m1<<'\t'
			  <<s.m2<<'\t'<<s.m3<<'\n';
			  f2.read((char*)&s,sizeof(s));
		}
	} f2.close();
}
void Delete()
{
	char ch;
	ifstream f1("stu.dat",ios::binary);
	ofstream f2("new.dat",ios::binary);
	while(f1)
	{
		f1.read((char*)&s,sizeof(s));
		cout<<s.rno<<" "<<s.name<<" "<<s.m1<<" "<<s.m2<<" "<<s.m3;
		cout<<"\ndo you want to delete the record\t";
		cin>>ch;
		if(ch!='y'&&ch!='Y')
		f2.write((char*)&s,sizeof(s));
	}
	f1.close();
	f2.close();
	remove("stu.dat");
	rename("new.dat","stu.dat");
}
void Modify()
{
	char ch,chh;
	long int p;
	fstream f1("stu.dat",ios::in|ios::out|ios::binary);
	if(!f1)
		cout<<"\nfile not found";
	else
	{
		p=f1.tellg();
		f1.read((char*)&s,sizeof(s));
		while(f1)
		{

			cout<<" "<<s.rno<<" "<<s.name<<" "
			<<s.m1<<" "<<s.m2<<" "<<s.m3;
			cout<<"\nwant to modify the record\t";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			{
				cout<<"\nwant to modify the roll number\t";
				cin>>chh;
				if(chh=='y'||chh=='Y')
				{
					cout<<"\nenter the modified roll number\t";
					cin>>s.rno;
				}
				cout<<"\nwant to modify the name\t";
				cin>>chh;
				if(chh=='y'||chh=='Y')
				{
					cout<<"\nenter the modified name\t";
					gets(s.name);
				}
				f1.seekp(p);
				f1.write((char*)&s,sizeof(s));
			 }
			 p=f1.tellg();
			f1.read((char*)&s,sizeof(s));
		}
	}f1.close();
}
void Search1()
{
	int r;
	int flag=0;
	ifstream f1("stu.dat",ios::binary);
	if(!f1)
		cout<<"\nfile cannot be searched";
	else
	{
		cout<<"\nenter the roll umber to be searched\t";
		cin>>r;
		while(f1)
		{
			f1.read((char*)&s,sizeof(s));
			if(r==s.rno)
			{
				cout<<"\nthe record is found\t";
				cout<<s.rno<<s.name<<s.m1<<s.m2<<s.m3;
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"\nrecord not found";
	}
	f1.close();
}

void Search2()
{
	int r;
	char n[30];
	int flag=0;
	ifstream f1("stu.dat",ios::binary);
	if(!f1)
		cout<<"\nfile cannot be searched\t";
	else
	{
		cout<<"\nenter the name to be searched\t";
		gets(n);
		while(f1)
		{
			f1.read((char*)&s,sizeof(s));
			if(strcmp(s.name,n)==0)
			{
				cout<<"\nthe record is found\t";
				cout<<s.rno<<" "<<s.name<<"  "
				<<s.m1<<" "<<s.m2<<" "<<s.m3;
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"\nrecord not found";
	}
	f1.close();
}
void Append()
{
	ofstream f1("stu.dat",ios::binary|ios::app);
	char ch;
	do
	{
		cout<<"\nenter the roll number\t";
		cin>>s.rno;
		cout<<"\nenter the name\t";
		gets(s.name);
		cout<<"\nenter the marks\t";
		cin>>s.m1>>s.m2>>s.m3;
		f1.write((char*)&s,sizeof(s));
		cout<<"\nwant to enter more\t";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	f1.close();
}
void main()
{
	char ch1;
	do {
	clrscr();
	char ch;
	cout<<"	\n\n\t\tFile Name :- 'stu.dat' \n\n\n";
	cout<<"\tMAIN MENU\n\n";
	cout<<"\t1.Create Record\n";
	cout<<"\t2.Read Record\n";
	cout<<"\t3.Delete Record\n";
	cout<<"\t4.Modify Record\n";
	cout<<"\t5.Search Record(roll number)\n";
	cout<<"\t6.Search Record(name)\n";
	cout<<"\t7.Appnend Record\n";
	cout<<"\t8.End Of File\n";
	cout<<"\n\nEnter Your Choice :- ";
	cin>>ch;
	switch(ch)
	{
		case '1': Create();break;
		case '2': Read();break;
		case '3': Delete();break;
		case '4': Modify();break;
		case '5': Search1();break;
		case '6': Search2();break;
		case '7': Append();break;
		case '8': cout<<"end of file";
			  exit(0);
		default :cout<<"invalid choice";
	}
	cout<<"want to continue....";
	cin>>ch1;
	}
	while(ch1=='y'||ch1=='Y');
	getch();
}
