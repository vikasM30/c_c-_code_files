#include<conio.h>
#include<stdio.h>
#include<process.h>
void push();
void main()
{
	clrscr();
	int ch;
	printf("enter your choice");
	scanf("%d",&ch) ;
	switch(ch)
	{
		case 1:push();

		break;
		default : exit(0);
	}
	getch();
}

void push()

{      int *avail,item,*top,link,info;
	int *new;
	if(avail==NULL)
	{
		printf("overflow");
	}
	else
	{
		new=avail;
		avail=link[avail];
		info[neww]=item;
		link[new]=top;
		top=neww;
	}

}