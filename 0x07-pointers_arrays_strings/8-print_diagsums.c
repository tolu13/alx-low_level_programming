#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - print the sum of two diagonals of square matrix
 *@a: input pointer
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, p, y;

	p = 0;
	y = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			p += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			y += a[i];

	}	
	printf("%d, %d\n", p, y);


	

}

