include "main.h"

/**
 *  print_sign - prints sign
 *@n: the int to check
 * Return: 1 and orint 0 if n is 0
 */
int print_sign(int n)
{

	if (n > 0)

	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)

	{
		_putchar(48);
		return (0);
	}

	else if (n < 0)

	{
		_putchar('-');
	}
		return (-1);

}
