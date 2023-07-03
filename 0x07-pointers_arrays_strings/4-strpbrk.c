#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string s
 * @accept: string accept
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int  i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j  = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])

				return (s + i);

			j++;
		}

		i++;
	}
	return ('\0');
}
