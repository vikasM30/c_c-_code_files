//LINEAR SEARCH//
#include<iostream.h>
#include<conio.h>
int search(int[],int,int);
void main()
{
	clrscr();
	int ar[20],num,n,index;
	cout<<"Enter the size of the array:\t";
	cin>>n;
	cout<<"\nEnter the elements of the aray:\n";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"\nEnter the element to be searched :\t";
	cin>>num;
	index=search(ar,n,num);
	if(index==-1)
	{
		cout<<"\nElement not found\n";
	}
	else
	{
		cout<<"\nElement found at"
		    <<" index:"<<index<<"\tPosition : "<<index+1<<endl;
	}
getch();
}
int search(int ar[],int n,int num)
{
	for(int i=0;i<n;i++)
	{
		if(ar[i]==num)
		return i;
	}
	return -1;
}