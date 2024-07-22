//CIRCULAR QUEUE//
#include<iostream.h>
#include<conio.h>
#include<process.h>
# define N 100
int cqueue[N],front=-1,rear=-1,size;
int isfull(int);
int isempty();
void Insert(int);
void Delete();
void print();
void main()
{
	clrscr();
	int num,ch,flag=0;
	char choice;
	cout<<"\n\tEnter the size of the queue<=100:\t";
	cin>>size;
	do
	{
		clrscr();
		cout<<"\n MAIN MENU \n\n";
		cout<<"\t1.Insert\n\t2.Delete\n\t3.Print\n\t4.Exit\n\n";
		cout<<"\tEnter your choice(1-4):\t";
		cin>>ch;
		switch(ch)
		{
			case 1: flag=isfull(size);
				if(flag==0)
			       {
					cout<<"\nInsertion not possible as the queue"
					    <<" is full\n";
			       }
				else
				{
					cout<<"\nEnter the number to be"
					    <<"inserted:\t";
					cin>>num;
					Insert(num);
				}break;
			case 2: flag=isempty();
				if(flag==0)
			       {
					cout<<"\nDeletion not possible as the"
					    <<" queue is empty\n";
			       }
				else
				Delete(); break;
			case 3: flag=isempty();
				if(flag==0)
			       {
					cout<<"\nPrinting not possible"
					    <<" as the queue is full\n";
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
	if((front==0&&rear==size-1)||(rear+1==front))
	return 0;
	else
	return 1;
}
int isempty()
{
	if(front==-1)
	return 0;
	else
	return 1;
}
void Insert(int num)
{
	if(isfull()==0)
	cout<<"\nOverflow!! Insertion cannot take place\n";
	else if(rear==-1)
	{
		front=rear=0;
	}
	else if(rear==size-1)
	{
		rear=0;
	}
	else
	{
		rear++;
		cqueue[rear]=num;
	}
}
void Delete()
{
	if(isempty()==0)
	{
		cout<<"\nUnderflow!! Queue is empty\n";
	}
	else
	{
		cout<<"\nElement to be deleted:\t"<<cqueue[front];
	}
	if(front==size-1)
	{
		front=0;
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
		front++;
}
void print()
{
	int i;
	if(front==-1)
	cout<<"\nQueue is empty:\n";
	else
	{
		cout<<"\n\tQUEUE CONTAINS:\t";
		for(i=front;i<=rear;i++)
		cout<<' '<<cqueue[i];
	}
}