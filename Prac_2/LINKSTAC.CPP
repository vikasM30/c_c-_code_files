#include<stdio.h>
#include<alloc.h>
#include<conio.h>
struct node
{
	int info;
	struct node *ptr;
}*top=NULL,*top1,*temp;
void PUSH()
{
	int a;
	printf("Enter the item to be inserted : \t");
	scanf("%d",&a);
	if(top==NULL)
	{
		top=(struct node*)malloc(1*sizeof(struct node));
		top->ptr=NULL;
		top->info=a;
	}
	else
	{
		temp=(struct node*)malloc(1*sizeof(struct node));
		temp->ptr=NULL;
		temp->info=a;
		top=temp;
	}
}

void POP()
{
	int a;
	top1=top;
	if(top1==NULL)
		printf("UNDERFLOW");
	else
	{
		top1=top1->ptr;
		printf("Deleted Element is %d : \t",top->info);
		free(top);
		top=top1;
	}
}

void DISPLAY()
{
	int i;
	top1=top;
	if(top1==NULL)
		printf("UNDERFLOW");
	else
	{
		while(top1!=NULL)
		{
			printf("%d",top1->info);
			top1=top1->ptr;
		}
	}
}

void main()
{
	clrscr();
	int x;
	char ch;
	do
	{
		printf("MAIN MENU\n") ;
		printf("\n\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. TRAVERSE") ;
		printf("\n\nEnter your choice : ") ;
		scanf("%d",&x);
		switch(x)
		{
			case 1: PUSH(); break;
			case 2: POP(); break;
			case 3: DISPLAY(); break;
		}
		printf("\nWant to Enter more ?? \t");
		ch=getch();
	 }while(ch=='y');
getch();

}