#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b,c,d,area,s;
	textcolor(2);
	cprintf("\rMain Menu\n\n"); textcolor(5);
	cprintf("\r1. Area of rectangle\r\n2. Area of circle\r\n3. Area of triangle\r\n4. Area of square"); textcolor(2);
	cprintf("\r\n\nEnter your choice : ");   textcolor(4);
	scanf("%d",&a);
	switch(a)
	{
		case 1: {
			   clrscr();
			   textcolor(3);
			   cprintf("\r\nEnter the dimentions of rectangle : ");
			   scanf("%d%d",&b,&c);
			   area=b*c;
			   textcolor(4);
			   cprintf("\r\nArea is : %d",area);
			   break;
			 }
		case 2: {
			   clrscr();
			   textcolor(3);
			   cprintf("\r\nEnter the radius : ");
			   scanf("%d",&b);
			   area=b*b;
			   textcolor(4);
			   cprintf("\r\nArea is : %d",area);
			   break;
			}
		case 3:  {
			    clrscr();
			    textcolor(3);
			    cprintf("\r\nEnter the sides of the triangle : ");
			    scanf("%d%d%d",&b,&c,&d);
			    s=(a+b+c)/2;
			    area=sqrt(s*(s-b)*(s-c)*(s-d));
			    textcolor(4);
			    cprintf("\r\nArea is : %d",area);
			    break;
			  }
		case 4:  {
			    clrscr();
			    textcolor(3);
			    cprintf("\r\nEnter side of square : ");
			    scanf("%d",&b);
			    area=b*b;
			    textcolor(4);
			    cprintf("\r\nArea is : %d",area);
			    break;
			  }

		default: {
				textcolor(4);
				cprintf("\r\nWrong Choice!!!");
			  }
	}
	getch();
}