#include "main.h"
/**
 * get_endianness - function checks endianess
 * Return: 0 for big endian 1 for ;ittle endian
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
	return (1);
	return (1);
}
