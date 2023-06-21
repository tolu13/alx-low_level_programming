#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: Always 0
 *
 */
void times_table(void)
{
	int i, j, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			y = j * i;
			if (j == 0)
			{
				_putchar(y  + '0');
			}
			else if (y < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			else if (y >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10);

			}

		}
		_putchar('\n');
	}

}
