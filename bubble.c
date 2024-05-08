#include<stdio.h>
void print_array(int *A,int size)
{
	int i;
	for(i =0;i<size;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
void bubble_sort(int *A,int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		int j;
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			{
				int t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
				
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before Sorting:");
	print_array(arr,n);
	printf("After Sorting:");
	print_array(arr,n);
	return 0;
}
