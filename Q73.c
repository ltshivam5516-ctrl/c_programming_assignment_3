#include<stdio.h>
int main ()
{
	char a[100],b[100];
    printf("enter the value of string:");
	fgets(a,sizeof(a),stdin);
	int i=0;
	while (a[i]!='\0'&&a[i]!='\n'){
		b[i]=a[i];
		i++;
		
	}
	 b[i]='\0';
	printf("copied string is : %s",b); 
	return 0;
	}
