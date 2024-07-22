#include<iostream.h>
#include<conio.h>
#include<stddef.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
	int cust_id;
	char cust_name[30];
	node*next;
};
class stack
{
	node*top;
	public:
	void push(int);
	void pop();
	void print();
	stack()
	{
		top=NULL;
	}
};
void main()
{
	int num,c,i;
	char ch,k[30];
	do
	{
		stack s;
		clrscr();
		cout<<"\nIMPLEMENTATION OF STACK THROUGH LINKED LIST (( CLASS )) \n\n\n\n";
		cout<<"1.INSERT\n2.DELETE\n3.PRINT\n4.EXIT";
		cout<<"\nEnter your choice :";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"Enter the Customer ID :";
				cin>>i;
				cout<<"Enter the Customer Name :";
				cin.getline(k,30);
				s.push(i);
				break;
			case 2: s.pop(); break;
			case 3: s.print(); break;
			case 4: exit(0);
			default : cout<<"Invalid Choice";
		}
		cout<<"\nWant to continue......\n";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}
void stack::push(int n)
{
	node*temp=new node;
	if(temp==NULL)
		cout<<"OVERFLOW....!!\n";
	else
	{
		temp->cust_id=n;
		gets(temp->cust_name);
		temp->next=NULL;
		if(top==NULL)
			top=temp;
		else
		{
			temp->next=top;
			top=temp;
		}
	}
}
void stack::pop()
{
	if(top==NULL)
		cout<<"UNDERFLOW....!!\n";
	else
	{
		node*temp=top;
		cout<<"\nDeleted Customer ID   : "<<temp->cust_id<<"\nDeleted Customer Name : "<<temp->cust_name;
		top=top->next;
		delete temp;
	}
}
void stack::print()
{
	if(top==NULL)
		cout<<"UNDERFLOW....!!\n";
	else
	{
		node*temp=top;
		while(temp!=NULL)
		{
			cout<<temp->cust_id<<'\t'<<temp->cust_name<<'\n';
			temp=temp->next;
		}
	}
}






