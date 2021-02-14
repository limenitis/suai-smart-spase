// Задание : 17 Вариант
// ввести  : строку и букву
// вывести : только слова, начинающиеся с заданной буквы

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "functions.h"

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
    //gets(str);
    gets_s(str, 255);
    printf("\n\n");

    printf("input char : ");
    c = getchar();
    //scanf("%1c", &c);
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


