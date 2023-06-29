#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string in which src would be concatenated
 * @src: the source string
 * @n: the integer
 * Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
	char *b = dest;

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

	return (b);

}

