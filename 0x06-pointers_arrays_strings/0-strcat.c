#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: - destination string where the source would be added
 * @src: - the source string to be concatenated
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	char *b = dest;

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

	return (b);

}
