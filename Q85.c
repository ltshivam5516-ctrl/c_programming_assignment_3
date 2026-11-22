#include <stdio.h>
int main()
{
    char str[100], old, new;
    int i = 0;
    printf("enter the value of string");
    gets(str);

    printf("enter the character you want to replace\n");
    scanf(" %c", &old);

    printf("enter the new character\n");
    scanf(" %c", &new);

    while (str[i] != '\0')
    {

        if (str[i] == old)
        {
            str[i] = new;
        }
        i++;
    }

    printf("the replaced string is %s", str);
    return 0;
}