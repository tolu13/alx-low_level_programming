#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: - first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;

}
