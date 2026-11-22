#include<stdio.h>
int vowel(char ch)
{
     if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	 
	 return 1;
	 
	 
	 return 0;	
}
int main ()
{
	char ch;
	printf("enter the value of character:");
	scanf(" %c", &ch);
	
	if (vowel(ch)){
		printf("vowel");
	}
	else {
		printf("not a vowel");
	}
	
	return 0;
}
