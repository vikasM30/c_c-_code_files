//STACK//
#include<iostream.h>
#include<conio.h>
#include<process.h>
# define N 100
int stack[N],top=-1;
int isfull(int);
int isempty();
void push(int);
void pop();
void print();
void main()
{
	clrscr();
	int size,num,ch,flag=0;
	char choice;
	cout<<"\n\tEnter the size of the stack<=100:\t";
	cin>>size;
	do
	{
		clrscr();
		cout<<"\n MAIN MENU \n\n";
		cout<<"\t1.push\n\t2.pop\n\t3.print\n\t4.exit\n\n";
		cout<<"\tEnter your choice(1-4):\t";
		cin>>ch;
		switch(ch)
		{
			case 1: flag=isfull(size);
				if(flag==0)
			       {
					cout<<"\nInsertion not possible as the stack"
					    <<" is full\n";
			       }
				else
				{
					cout<<"\nEnter the number to be "
					    <<"inserted:\t";
					cin>>num;
					push(num);
				}break;
			case 2: flag=isempty();
				if(flag==0)
			       {
					cout<<"\nDeletion not possible as the"
					    <<" stack is empty\n";
			       }
				else
				pop(); break;
			case 3: flag=isempty();
				if(flag==0)
			       {
					cout<<"\nPrinting not possible"
					    <<" as the stack is full\n";
			       }
			       else
			       print();break;
			case 4: cout<<"\nEnd of program\n";
				exit(0);break;
			default: cout<<"\nInvalid choice";
		}
		cout<<"\nWant to continue...........";
		cin>>choice;
	} while(choice=='y'||choice=='Y');
getch();
}
int isfull(int size)
{
	if(top==size-1)
	return 0;
	else
	return 1;
}
int isempty()
{
	if(top==-1)
	return 0;
	else
	return 1;
}
void push(int num)
{
	stack[++top]=num;
}
void pop()
{
	cout<<"\nElement to be deleted:\t"<<stack[top--];
}
void print()
{
	int i;
	cout<<"\n\tSTACK CONTAINS:\t";
	for(i=top;i>=0;i--)
	cout<<' '<<stack[i];
}