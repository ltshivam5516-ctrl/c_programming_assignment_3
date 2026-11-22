#include<stdio.h>

void armstrong(int n)
{
	int q,sum=0,temp;
	temp=n;
	while (n!=0){
		
	q=n%10;
	sum=sum+q*q*q;
	n=n/10;
	         	}
	         	
	if (sum==temp){
		
		printf("the number is armstong");
	}         	
	else {
		printf("number is not armstorng");
	}
	
	}
int main ()
{
	int n;
	printf("enter the value of number :");
	scanf("%d", &n);
	armstrong(n);
	
	return 0;
}
