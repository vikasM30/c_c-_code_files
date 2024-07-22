#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int m[3],total;
	float perc;
	char grade;
};
void main()
{
	clrscr();
	student s[2];
	int i,j;
	for(i=0;i<2;i++)
	{
		cout<<"enter the details of student :"<<i+1;
		cout<<"\nenter the rno : ";
		cin>>s[i].rno;
		cout<<"enter the name : ";
		gets(s[i].name);
		s[i].total=0;
		for(j=0;j<3;j++)
		{
			cout<<"enter the marks of student :"<<j+1<<"\t";
			cin>>s[i].m[j];
			s[i].total+=s[i].m[j];
		}
		s[i].perc=s[i].total/3.0;
		if(s[i].perc>=90)
			s[i].grade='A';
		else if(s[i].perc>=75)
			s[i].grade='B';
		else if(s[i].perc>=60)
			s[i].grade='C';
		else if(s[i].perc>=50)
			s[i].grade='D';
		else if(s[i].perc>=35)
			s[i].grade='E';
		else
			s[i].grade='F';
	}
	  cout<<"\tname\t\tpercentage\t\tgrade\n";
	  cout<<"\n";
	  for(i=0;i<2;i++)
	  {
		cout<<"\t"<<s[i].name<<"\t\t"
		    <<s[i].perc<<"\t\t\t"
		    <<s[i].grade<<"\n";
	  }
	  getch();
}