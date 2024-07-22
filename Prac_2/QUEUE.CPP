#include<stdio.h>
#include<process.h>
#include<conio.h>
void ins(int n,int *f,int *r,int *a)
{
	if(*r==n-1)
	 printf("overflow");
	else
	{
		if(*r==-1)
		{
			*r=0;
			*f=0;
		 }
		 else
			(*r)++;
	}
	printf("\nenter the item :");
	scanf("%d",&a[*r]);
}

void del(int *f,int *r, int *a)
{
	if(*f==-1)
		printf("underflow");
	else
	{
		if(*f==0&*r==0)
		{
			printf("Deleted item is %d ",a[*f]);
			*f=-1;
			*r=-1;
		}
		else
		{
			printf("Deleted item is %d ",a[*f]);
			(*f)++;
		}
	}
}

void traverse(int f,int r,int a[])
{
	int i;
	for(i=f;i<=r;i++)
	printf("%d\t",a[i]);
}

void main()
{
	clrscr();
	int f=-1,r=-1,a[5],x;
	char ch;
	do
	{
		clrscr();
		printf("\n1. Insert ") ;
		printf("\n2. Delete ") ;
		printf("\n3. Traverse ") ;
		printf("\n4. Exit ") ;
		printf("\n\nEnter your choice : ") ;
		scanf("%d",&x);
		switch(x)
		{
			case 1: ins(5,&f,&r,a) ; break;
			case 2: del(&f,&r,a); break;
			case 3: traverse(f,r,a); break;
			case 4: exit(0);
		}
		printf("\nWant to enter more???  \n");
		ch=getch();
	 }while(ch=='y');
	 getch();
}

