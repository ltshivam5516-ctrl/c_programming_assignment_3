#include<stdio.h>
int main ()
{
	char s1[100],s2[100];
	printf("enter the value of string 1");
	fgets(s1,sizeof(s1),stdin);
	
	printf("enter the value of string 2");
	fgets(s2,sizeof(s2),stdin);
	
	int i=0,j=0;
	while (s1[i]!='\0'&&s1[i]!='\n'){
		i++;
		
	}
	
	while (s2[j]!='\0'&&s2[j]!='\n'){
		s1[i]=s2[j];
		j++;
		i++;
		
	}
	
	s1[i]='\0';
	
	printf("concatenated string : %s",s1);
	
	
	return 0;
	}
