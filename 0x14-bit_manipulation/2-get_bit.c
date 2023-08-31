#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long
 * @index: unsigned int
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int bit, k;

        if (index > (sizeof(unsigned long int) * 8))
                return (-1);

        k = n  >>  index;

        bit = k & 1;

        return (bit);
}
