#include<stdio.h>
#include<conio.h>

void push(int n,int *top,int *a)
{
	int item;
	if(*top==n-1)
	printf("overflow") ;
	else
	{
		(*top)++;
		printf("\nEnter the item : ");
		scanf("%d",&item);
		a[*top]=item;
	}
}

void pop(int *top,int *a)
{
	if(*top==-1)
	printf("underflow");
	else
	{
		printf("deleted item %d",a[*top]);
		(*top)--;
	}
}

void traverse(int top,int a[])
{
	for(int i=0;i<=top;i++)
	printf("%d",a[i]);
}

void main()
{
	clrscr();
	int top=-1,a[5],x;
	char ch;
	do
	{
		clrscr();
		printf("MAIN MENU\n") ;
		printf("\n\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. TRAVERSE") ;
		printf("\n\nEnter your choice : ") ;
		scanf("%d",&x);
		switch(x)
		{
			case 1:  push(5,&top,a) ; break;
			case 2:  pop(&top,a); break;
			case 3:  traverse(top,a); break;
		}
		printf("\nWant to enter more??? ");
		ch=getch();
	 }while(ch=='y');
getch();
}

