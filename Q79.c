//PROGRAME TO COUNT NO. OF VOWELS IN STRING .
#include<stdio.h>
int main ()
{
   char str[100];
   printf("enter the string:");
   gets(str);

   int i=0,count=0;
   while(str[i]!='\0')
   {

    if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || 
        str[i]=='a' || str[i]=='e' || str[i]=='o' ||str[i]=='i' || str[i]=='u' )  {
            count ++;
        }
 i++;

   }

   printf("total vowels is : %d",count);

   return 0;













} 