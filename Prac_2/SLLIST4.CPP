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
node*front,*rear;
void insert(int);
void del();
void print();
void main()
{
	int num,c,i;
	char ch,k[30];
	front=rear=NULL;
	do
	{
		clrscr();
		cout<<"\nIMPLEMENTATION OF QUEUE THROUGH LINKED LIST\n\n\n\n";
		cout<<"1.INSERT\n2.DELETE\n3.PRINT\n4.EXIT";
		cout<<"\nEnter your choice :";
		cin>>c;
		switch(c)
		{
			case 1: cout<<"Enter the Customer ID :";
				cin>>i;
				cout<<"Enter the Customer Name :";
				cin.getline(k,30);
				insert(i);
				break;
			case 2: del(); break;
			case 3: print(); break;
			case 4: exit(0);
			default : cout<<"Invalid Choice";
		}
		cout<<"\nWant to continue......\n";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();
}
void insert(int n)
{
	node*temp=new node;
	if(temp==NULL)
		cout<<"OVERFLOW....!!\n";
	else
	{
		temp->cust_id=n;
		gets(temp->cust_name);
		temp->next=NULL;
		if(rear==NULL)
			rear=front=temp;
		else
		{
			rear->next=temp;
			rear=temp;
		}
	}
}
void del()
{
	if(front==NULL)
		cout<<"UNDERFLOW....!!\n";
	else
	{
		node*temp=front;
		cout<<"\nDeleted Customer ID   : "<<temp->cust_id<<"\nDeleted Customer Name : "<<temp->cust_name;
		front=front->next;
		delete temp;
		if(front==NULL)
		{
			rear=NULL;
			cout<<"\nQueue is empty";
		}
	}
}
void print()
{
	if(front==NULL)
		cout<<"UNDERFLOW....!!\n";
	else
	{
		node*temp=front;
		while(temp!=NULL)
		{
			cout<<temp->cust_id<<'\t'<<temp->cust_name<<'\n';
			temp=temp->next;
		}
	}
}






