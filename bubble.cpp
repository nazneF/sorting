#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("Enter the number of elements:");
	scanf("%d",&n);		//to take the input oh how many elements are there in total
	int a[n];
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		//to take the elements given by the user
	}
	printf("the sorted elements in the array are:");
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
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);		//statement to print the sorted elements
	}
	return 0;
}
