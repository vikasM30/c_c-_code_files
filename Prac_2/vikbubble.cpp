#include <iostream.h>
int const SIZE = 6
void BubbleSort(int [ ], int);
int main()
{
int a[SIZE]= {77,42,35,12,101,6};
int i;
cout<< “The elements of the array before sorting\n”;
for (i=0; i<= SIZE-1; i++) cout<< a[i]<<”, “;
BubbleSort(a, SIZE);
cout<< “\n\nThe elements of the array after sorting\n”;
for (i=0; i<= SIZE-1; i++) cout<< a[i]<<”, “;
return 0;
}
void BubbleSort(int A[ ], int N)
{
int i, pass, hold;
for (pass=1; pass<= N-1; pass++)
{
for (i=0; i<= SIZE-pass; i++)
{
if(A[i] >A[i+1])
{
hold =A[i];
A[i]=A[i+1];
A[i+1]=hold;
}
}
}
}
