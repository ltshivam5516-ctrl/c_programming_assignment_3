//PROGRAME TO READ LOWER CASE LETTER ,UPPER CASE LETTER,DIGITS AND SPECIAL SYMBOLSIN A GIVEN LINE OF TEXT.
#include<stdio.h>
int main ()
{
    char str[100];
    int i=0,lowercase=0,uppercase=0,digits=0,specialsymbols=0;
    printf ("enter the value of string");
    gets(str); 
    while (str[i]!='\0'){

    if (str[i]>='a'&&str[i]<='z'){

        lowercase ++;

    }
  else if (str[i]>='A'&&str[i]<='Z'){

        uppercase ++;

    }

   else if (str[i]>='0'&&str[i]<='9'){

        digits++;

    } 

    else {
        specialsymbols++; 


    }

    i++;
  

    }
  

printf ("lowercase:%d\n,uppercase:%d\n,digits:%d\n,specialsymbols:%d",lowercase,uppercase,digits,specialsymbols);
return 0;









}