//PROGRAME TO CONVERT LOWER CASE INTO UPPER CASE .
#include<stdio.h>
int main ()
{
   char str[100];
   printf("enter the string :");
   gets(str);
int i=0;
while (str[i]!='\0'){
if (str[i]<='z'&&str[i]>='a'){

    str[i]=str[i]-32;

}

i++;
}

printf("upper case string is : %s", str);
return 0;







}