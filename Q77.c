//PROGRAM TO FIND LENGTH , COPY, CONCATINATE,COMPARE,REVERSE OF STRING USING PRE - DEFINED FUNCTION.
#include<stdio.h>
#include<string.h>
int main ()
{
    
    char str1[100],str2[100],str3[100];
    int len;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    len = strlen(str1);
    printf("Length of first string is: %d\n",len);
    strcpy(str3,str1);
    printf("Copied string is: %s\n",str3);
    strcat(str3,str2);
    printf("Concatenated string is: %s\n",str3);
    if(strcmp(str1,str2)==0)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");
    strrev(str1);
    printf("Reversed string is: %s\n",str1);














}
