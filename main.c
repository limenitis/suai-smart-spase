// Задание
// ввести  : строку и букву
// вывести : только слова, начинающиеся с заданной буквы


#include <stdio.h>
// #include <string.h>


// int main()
// {
//     char str[255];

//     printf("put str : ");
//     printf("put str : ");
//     scanf("%s", str);

//     printf("str : ");
//     printf(str);

//     return 0;
// }



char* input( const char* massage )
{
    printf("%s \n", massage);

    int len = 0;
    int max_len = 2;

    char c = '\0';
    char *str = (char *)malloc(max_len);

    while (c != '\n')
    {
        scanf("%c", c);
        if (len < max_len)
        {
            str[len] = c;
            len++;
        }
        else
        {
            str = extand_str(str, &max_len);
            str[len] = c;
            len++;
        }
    }    
    str[len] = '\0';

    return str;
}

char* extand_str(char* str, int *max_len)
{
    char *new_str = (char *)malloc((int)max_len*1.5);

    int i = 0;
    while (str[i] != '\0')
    {
        new_str[i] = str[i];
        i++;
    }
    str[i] = '\0';

    free(str);
    return new_str;
}

int main()
{
    char* str = input("input str : ");

    printf("Your string is %s \n", str);

    return 0;
}

