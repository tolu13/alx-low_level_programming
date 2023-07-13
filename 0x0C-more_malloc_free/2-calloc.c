#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of elements
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(nmemb * size);

	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		n[i] = 0;
	}
	return (n);
}
