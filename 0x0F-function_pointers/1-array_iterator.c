#include <stddef.h>
/**
 * array_iterator - function that executes another function given as a parameter
 * @array: array given
 * @size: size of the array
 * @action: pointer to function 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);

}
