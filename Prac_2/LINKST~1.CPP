#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
struct stack
{
	int no;
	struct stack *next;
}*top=NULL,*start;
typedef struct stack st;
void push();
int pop();
void display();
void main()
{
	int choice,item,ch;
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
					c=pop();
					printf("\n The deleted element is %d", c);
					break;
				}

			case 3 :{
					clrscr();
					display();
					break;
				}
			case 4 :   exit(0);
		}
	 }while()
getch();
}

void push()
{
	st *p;
	p=(st*)malloc(sizeof(st));
	printf("\n enter the number");
	scanf("%d",&p->no);
	p->next=top;
	top=p;
}

int pop()
{
	st *p;
	p=(st*)malloc(sizeof(st));
	p=start;
	if(top==NULL)
		printf("underflow!!!");
	else
	{
		top=top->next;
		return (p->no);
		free(p);
	}
}

void display()
{
	st *p;
	p=(st*)malloc(sizeof(st));
	p=top;
	while(p!=NULL)
	{
		printf("\nno=%d",p->no);
		p=p->next;
	}
	printf("\nno=%d",p->no);
}