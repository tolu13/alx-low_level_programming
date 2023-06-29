#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @str: pointer
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';

		}
		i++;
	}
	return (str);

}

