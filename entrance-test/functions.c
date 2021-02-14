#include <stdio.h>
#include "functions.h"

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
        while (str[i] == ' ') { i++; }; // skip spaces

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
            while (str[i] != ' ' && str[i] != '\0')
            {
                // skip word
                i++;
            }
        }
    }
    new_str[j] = '\0';

    return new_str;
}
