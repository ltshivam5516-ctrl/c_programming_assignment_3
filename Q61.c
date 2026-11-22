#include<stdio.h>

void palindrome(int n)
{
    int q,sum=0,temp;
    temp=n;
    while(n!=0)
{
	q=n%10;
	sum=sum*10+q;
	n=n/10;
}
	
if (temp==sum){
	printf("number is palindrome");
}
else {
	printf("number is not palindrome");
}
	
}
int main()
{
	int n;
	printf("enter the value of number");
	scanf("%d", &n);
	
	palindrome(n);
	
	return 0;
	
}
