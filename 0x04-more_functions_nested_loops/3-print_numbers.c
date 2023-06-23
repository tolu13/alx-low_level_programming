#include "main.h"

/**
 * print_numbers - prints numbers 0 -9 followed by a newline
 *
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');

}

