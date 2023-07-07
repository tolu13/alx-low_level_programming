#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: sourc4 string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
        char *d = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';

        return (d);
}

