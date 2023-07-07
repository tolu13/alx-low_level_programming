#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s: character
 * Return: 0
 */

int _strlen(char *s)
{
        int m = 0;

        while (*(s + m) != '\0')
        {
                m++;
        }
        return (m);

}
