#include<stdio.h>
void display(int id,char name[],int price )
{
	
	printf("\n book id = %d", id);
	printf("\n book name = %s", name);
	printf("\n book price is = %d", price);
}
int main ()
{
	int id ,price;
	char name[50];
	
	printf("enter book id ");
	scanf("%d", &id);
	
	printf("enter the price ");
	scanf("%d", &price);
	
	printf("enter the book name");
	gets(name);
	
	display(id,name,price);
	return 0;
}
