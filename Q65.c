#include<stdio.h>
int prime(int n)
{
	int i;
	if(n<2)
	 return 0;
	 
	for (i=2;i< n;i++){
      if (n%i==0)
	  return 0;
		            } 
	
	return 1;
}
int main ()
{
	int n;
	printf("enter the value of number");
	scanf("%d", &n);
	
	if (prime(n)==1){
		printf("the number is prime");
	} 
	else {
		printf ("the number is not prime");
	}
	
	return 0;
	
	
}
