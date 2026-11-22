#include<stdio.h>
int main ()
{
	char s1[100],s2[100],i=0;
   printf("enter the string :");
   fgets(s1,sizeof(s1),stdin);
   
   while (s1[i]!='\0'&&s1[i]!='\n'){
   	
   	i++;
   	}
   	
   	int j=0;
   	
   	while (i>0){
   	s2[j]=s1[i-1];
	   
	   i--;
	   j++;	
   		
	}
	
	s2[j]='\0';
	
	printf("reverse of the string is :%s", s2);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
