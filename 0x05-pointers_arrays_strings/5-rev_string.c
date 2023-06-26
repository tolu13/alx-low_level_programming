#include "main.h"

/**
 * rev_string - prints reverse
 * @s: - input param
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i > 0;)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n'
}
