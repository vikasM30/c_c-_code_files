#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,m,dig=0,p=1,i,j,a[10];
	printf("Enter the number : ");
	scanf("%d",&m);
	n=m;
	while(n!=0)
	{
		dig++;
		n=n/10;
	}
	for(i=0;i<=dig-1;i++)
	{
		p=p*10;
		a[i]=m%p;
		m=m/p;
		p=1;
	}
	for(i=dig-1;i>=0;i--)
	{
		switch(a[i])
		{
			case 0: printf("zero "); break;
			case 1: printf("one "); break;
			case 2: printf("two "); break;
			case 3: printf("three "); break;
			case 4: printf("four "); break;
			case 5: printf("five "); break;
			case 6: printf("six "); break;
			case 7: printf("seven "); break;
			case 8: printf("eight "); break;
			case 9: printf("nine "); break;
		}

	}
getch();
}