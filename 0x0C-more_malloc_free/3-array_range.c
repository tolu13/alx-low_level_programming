#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: min values
 * @max: max values
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(*array) * ((max - min + 1)));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
