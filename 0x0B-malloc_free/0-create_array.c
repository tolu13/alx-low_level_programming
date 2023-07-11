#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates array of chars and
 * initiializes it with a speciifc char
 * @size: size of the memory
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	d = malloc(size * sizeof(c));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}

