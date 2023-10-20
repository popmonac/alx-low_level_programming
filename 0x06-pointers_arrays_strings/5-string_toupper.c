#include <stdio.h>
#include "main.h"
/**
 * string_toupper - This function convert lowercase to uppercase
 *
 * @b: gets the argument from main.c
 *
 * Return: Returns outcome
 */
char *string_toupper(char *b)
{
        int j;

        for (j = 0; b[j] != '\0'; j++)
        {
                if (*b[j] >= 'a' && *b[j] <= 'z')
                {
                        b[j] = b[j] - 32;
                }
        }
        return (b);
}
