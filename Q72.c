#include<stdio.h>
int main ()
{
   char s[100];
   printf("enter the string :");
   fgets(s,sizeof(s),stdin);
   int i=0,count=0;
   while (s[i]!='\0'&&s[i]!='\n'){
   	
   		count++;
	    
	   
	  i++; 
   }
	printf("length of the string is : %d ", count );
	return 0;
	
	
	
}
