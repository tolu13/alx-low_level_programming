#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int i = 0;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
		while (s1[s1_length] != '\0')
		s1_length++;
		while (s2[s2_length] != '\0')
		s2_length++;

		if (n >= s2_length)
		{
			n = s2_length;
		}
		r = malloc((s1_length + n  + 1) * sizeof(char));
		if (r == NULL)
		{
			return (NULL);
		}
		while (*s1 != '\0')
		{
			r[i] = *s1;
			s1++;
			i++;
		}
		while (n > 0)
		{
			r[i] = *s2;
			s2++;
			i++;
			n--;
		}
		r[i] = '\0';
		return (r);
}
