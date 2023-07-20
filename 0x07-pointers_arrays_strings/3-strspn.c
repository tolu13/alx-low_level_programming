#include "main.h"
/**
 * _strspn - function that calculates the
 * length of the initial segment of s
 * which consists of characters in accept
 * @s: pointer to string
 * @accept: substring prefix to look for
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, m, k;

	i = 0;

	while (*s != '\0')
	{
		m = 0;
		k = 1;

		while (accept[m] != '\0')
		{
			if (s[i] == accept[m])
			{
				k = 0;
				break;
			}
			m++;
		}
		if (k == 1)
			break;
		i++;
	}
	return (i);
}
