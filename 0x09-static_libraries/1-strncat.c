#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
        char *h = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        *dest = '\0';

        return (h);
}
