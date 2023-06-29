#include "main.h"

/**
 * reverse_array - prints arrays in reverse order
 * @a: a pointer to the array of integers
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;

	}

}
