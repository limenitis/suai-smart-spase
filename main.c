// Задание : 17 Вариант
// ввести  : строку и букву
// вывести : только слова, начинающиеся с заданной буквы

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"

int main()
{
    char str[255];
    char c;

    printf("\n+--------------------task----------------------+\n");
    printf(  "| input  : string and char                     |\n");
    printf(  "| output : only words starting with input char |\n");
    printf(  "+----------------------------------------------+\n\n");

    printf("\n---------------------input---------------------\n");

    printf("input str  : ");
    gets(str);
    // scanf("%255s", str);
    // gets_s(str, 255);
    printf("\n\n");

    printf("input char : ");
    scanf("%1c", &c);
    printf("\n\n");

    printf("\n--------------------process--------------------\n");

    printf("str        : ");
    printf(str);
    printf("\n\n");

    printf("char       : ");
    printf("%c",c);
    printf("\n\n");

    printf("result     : ");
    char *new_str = str_processing(str, c);
    printf(new_str);
    free(new_str);
    printf("\n");

    printf("\n----------------------end----------------------\n");
    printf("\n");

    return 0;
}


/**
 * @brief function return only words starting with input char
 * 
 * @param str     - input str 
 * @param ch      - input char 
 * @return char*  new_str (processing str)
 */
char* str_processing(char* str, char ch)
{
    char *new_str;
    new_str = (char*) malloc(255 * sizeof(char*));

    int i = 0; // index old str
    int j = 0; // index new str
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            while (str[i] != ' ' && str[i] != '\0')
            {
                // copy word
                new_str[j] = str[i];
                i++;
                j++;
            }
            new_str[j] = ' ';
            j++;
        }
        else
        {
            i++;
            while (str[i] != ' ' && str[i] != '\0')
            {
                // skip word
                i++;
            }
            i++;
        }
    }
    new_str[j] = '\0';

    return new_str;
}
