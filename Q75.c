#include<stdio.h>
int main ()
{
	char s1[100],s2[100];
	printf("enter the string 1:");
	fgets(s1,sizeof(s1),stdin);
	
    printf("enter the string 2:");
	fgets(s2,sizeof(s2),stdin);
	int i=0;
	while (s1[i]!='\0'&&s1[i]==s2[i]){
		
		i++;
		
	}
	
	if (s1[i]==s2[i]){
		printf ("both are equal ");
	}
	else {
		printf("both are not equal strings");
	}
	
	return 0;
	}
