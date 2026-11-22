#include<stdio.h>
int maximum(int a[], int n )
{
	int i,max=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]>max)
		 
		 max=a[i];
	}
	
	return max ;
}
int main ()
{
	int a[100],i,n;
	printf("enter the value of numbers you want in array");
	scanf("%d", &n );
	printf("enter the elements of array");
	for (i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("maximum =%d", maximum(a,n));
	return 0;
	
	
}
