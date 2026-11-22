#include <stdio.h>
int main()
{
    char str[100], rev[100], temp;
    int i = 0;
    printf("enter the string");
    gets(str);

    while (str[i] != '\0')
    {
        i++;
    }

    int j = 0;

    while (i > 0)
    {

        rev[j] = str[i - 1];
        i--;
        j++;
    }
    rev[j] = '\0';
    printf("the reverse string is %s \n", rev);

    int k = 0;
    while (str[k] != '\0' && rev[k] == str[k])
    {

        k++;
    }

    if (str[k] == '\0')
    {

        printf("the given string is palindrome");
    }

    else
    {

        printf("the given string is not palindrome");
    }
    return 0;
}