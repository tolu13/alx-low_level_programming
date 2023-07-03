#include "main.h"

/**
 * _memcpy -copies byte from memory area
 *@dest: memory area dest
 *@src: memort area
 *@n: unsigned int
 *Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);


}
