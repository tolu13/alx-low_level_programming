#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 *@s: memory area
 *@b: constant bytes
 *@n: n bytes
 *Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;

        }
        return (s);



}
