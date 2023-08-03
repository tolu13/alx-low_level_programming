#include "main.h"
/**
 * clear_bit - function that set value of bit to 0 at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 for success, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	t = ~(t << index);

	*n = *n & t;

	return (1);
}
