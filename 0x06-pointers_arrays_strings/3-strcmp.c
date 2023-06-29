#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first arguements
 * @s2: second arguements
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;

	}
	return (s1[i] - s2[i]);

}

