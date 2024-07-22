#include<conio.h>
#include<stdio.h>
#include<process.h>
void push();
int pop();
void traverse();
int stack[30];
int top=-1;
void main()
{
	int ch,c;
	do
	{
		clrscr();
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. TRAVERSE");
		printf("\n4. EXIT");
		printf("\n\n ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :{
					clrscr();
					push();
					break;
				}

			case 2 :{
					clrscr();
					c=pop();
					printf("\n The deleted element is %d", c);
					break;
				}

			case 3 :{
					clrscr();
					traverse();
					break;
				}
			case 4 :   exit(0);
		}
	} while(ch!=4);
getch();
}

void push()
{
	int item;
	if(top==29)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter the element to be inserted : ");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}

int pop()
{
	int item;
	if(top==-1)
	{
		printf("UNDERFLOW!!!");
	}
	else
	{
		item=stack[top];
		top=top-1;
	}
	return (item);
}

void traverse()
{
	int i;
	if(top==-1)
	{
		printf("UNDERFLOW!!!");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stack[i]);
		}
	}
}
