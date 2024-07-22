#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();

int a[5],i,j,temp,n;
printf("Enter the no of elements to be entered to be sorted :\n");
scanf("%d",&n);
printf("\nEnter the elements of array : \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
printf("\nThe sorted array is : \n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}