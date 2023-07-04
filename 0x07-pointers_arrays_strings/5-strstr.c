#include "main.h"
/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching substring
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring
 * NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

		while (*haystack != '\0')
		{
			h = haystack;
			n = needle;
			while (*n != '\0' && *haystack == *n)
			{
				haystack++;
				n++;
			}
			if (!*n)
				return (h);
			haystack++;
		}
		return ('\0');
}
