#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: is the array
 * @size: is the size of the elements in the array
 * @cmp: is a pointer to the function to be used
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool j;

	if (array != NULL && size > 0 && cmp != NULL)
	{	if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == TRUE)
				return (i);
		}
	}
	return (-1);
}
