//BINARY SEARCH//
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
	int beg=0,end=n-1,m;
	while(beg<=end)
	{
		m=(beg+end)/2;
		if(ar[m]==num)
		return m;
		else if (num>ar[m])
			beg=m+1;
		else
			end=m-1;
	}
	return -1;
}