#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,t,m;
printf ("Input total no of elemnts");
scanf ("%d",&n);
printf("enter element of an array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<n-1;i++)
{
	m=i;
	while (m>0 && a[m]<a[m-1]])
	{
	t=a[m];
	a[m]=a[m-1];
	a[m-1]=t;
	m--;
	}
}
printf("sorted array is:");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
getch();
}
