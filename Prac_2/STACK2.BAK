#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};struct node *top=NULL;

void push()
{
	int item;
	node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	printf("overflow") ;
	else if(top==NULL)
	{
		printf("enter the item");
		scanf("%d",&item);
		ptr->info=item;
		ptr->link=NULL;
		top=ptr;
	}
	 else
	{
		 printf("enter the item");
		 scanf("%d",&item);
		 ptr->info=item;
		 ptr->link=top;
		 top=ptr;
	}
}

void pop()
{
	node *ptr;
	if(top==NULL)
		printf("underflow");
	else
	{
		printf("deleted item %d",top->info);
		ptr=top;
		top=top->link;
		free(ptr);
	}
}

void traverse()
{
	node *ptr;
	ptr=top;
	while(ptr->link!=NULL)
	{
		printf("%d",ptr->info);
		ptr=ptr->link;

	}
}

void main()
{
	clrscr();
	int x;
	char ch;
	do
	{
		printf(" what u want \n1-push\n2-pop\n3-traverse") ;
		scanf("%d",&x);
		switch(x)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: traverse(); break;
		}
		printf("wanna more");
		ch=getch();
	 }while(ch=='y');
getch();
}


