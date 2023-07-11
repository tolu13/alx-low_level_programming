#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: pointer to a string
 * Return: Null
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, k;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	p = (char *) malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		p[k] = str[k];

	}
	return (p);
}
