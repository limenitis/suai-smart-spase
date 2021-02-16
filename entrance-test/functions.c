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
                str[j] = str[i];
                i++;
                j++;
            }
            str[j] = ' ';
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
    str[j] = '\0';

    return str;
}
