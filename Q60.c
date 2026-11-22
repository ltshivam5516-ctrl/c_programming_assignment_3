#include<stdio.h>

void check(int x);

int main ()
{    
    int n;
    printf("enter the value of number");
    scanf("%d", &n);
    
    check(n);
    
	
	return 0;
}

void check(int n)
{
	if (n%2==0){
		printf("even number");
	}
	else {
		printf("odd number ");
	}
	
	
	
	
}
