#include "main.h"

/**
 * jack_bauer - prints every minutes from 00:00 to 23:59
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int k, u;

	k = 0;
	while (k < 24)
	{
		u = 0;
		while (u < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar (':');
			_putchar((u / 10) + '0');
			_putchar((u % 10) + '0');
			_putchar('\n');
			u++;
		}
	}
	k++;


}
