#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to string
 * @c: character to be found
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');



}
