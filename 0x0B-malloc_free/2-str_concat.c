#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, f, total;
	int count1 = 0;
	int count2 = 0;
	char *d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		count1 = count1 + 1;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		count2 = count2 + 1;
	}
	total = count1 + count2;

	d = malloc(total + 1 * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		d[c] = s1[c];
	}
	for (c = c, f = 0; s2[f] != '\0'; c++, f++)
	{
		d[c] = s2[f];
	}
	d[c] = '\0';
	return (d);


}
