#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the integer to extract last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
