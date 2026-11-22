#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, character = 0, words = 1;
    printf("enter the sentence");
    gets(str);

    while (str[i] != '\0')
    {

        if (str[i] != ' ')
        {
            character++;
        }

        if (str[i] == ' ')
        {

            words++;
        }
        i++;
    }

    printf("total no.of characters =%d \n total no. of words=%d", character, words);
    return 0;
}