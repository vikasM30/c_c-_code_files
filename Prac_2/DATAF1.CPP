//reading and writing class obj//

#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class student
{
	char name[20];
	char grade;
	float marks;
	public:
	void getdata();
	void display();
};
void student::getdata()
{
	char ch;
	cin.get(ch);
	cout<<"\tEnter the name : ";
	cin.getline(name,20);
	cout<<"\tEnter the grade : ";
	cin>>grade;
	cout<<"\tEnter the marks : ";
	cin>>marks;
	cout<<"\n";
}
void student::display()
{
	cout<<"\tname : "<<name<<"\t";
	cout<<"\tgrade : "<<grade<<"\t";
	cout<<"\tmarks : "<<marks<<"\n";
}
void main()
{	clrscr();
	student arts[3];
	fstream f1;
	f1.open("stu.dat",ios::in|ios::out|ios::binary);
	if(!f1)
	{
		cout<<"\n\n\t\tFile is not created\n";
	}
	cout<<"\tEnter the details of the students : \n";
	for(int i=0;i<3;i++)
	{
		arts[i].getdata();
		f1.write((char*)&arts[i],sizeof(arts[i]));
	}
	f1.seekg(0);
	cout<<"\n\n\tThe contents of ''stu.dat'' are shown below.\n\n\n";
	for(i=0;i<3;i++)
	{
		f1.read((char*)&arts[i],sizeof(arts[i]));
		arts[i].display();
	}f1.close();
	getch();
}