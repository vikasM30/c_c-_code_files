#include<stdio.h>
#include<conio.h>
int top=-1;
#define size 5
struct stack
{
	int s[size];
	int top;
}st;
void PUSH()
{
	int a;
	if(st.top==size-1)
		printf("OVERFLOW");
	else
	{
		printf("Enter the item to be inserted : \t");
		scanf("%d",&a);
		st.top=st.top+1;
		st.s[st.top]=a;
	}
}

void POP()
{
	int a;
	if(st.top==-1)
		printf("UNDERFLOW");
	else
	{
		a=st.s[st.top];
		st.top=st.top-1;
		printf("Deleted Element is %d : \t",a);
	}
}

void DISPLAY()
{
	int i;
	if(st.top==-1)
		printf("UNDERFLOW");
	else
	{
		for(i=st.top;i>0;i--)
		printf("\n %d",st.s[i]);
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