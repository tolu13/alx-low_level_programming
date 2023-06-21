#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, y;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				y = j * i;
				if (j == 0)
				{
					_putchar(y + '0');
				} else if (y < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(y + '0');
				} else if (y >= 10 && y < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((y / 10) + '0');
					_putchar((y % 10) + '0');
				} else if (y >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((y / 100) + '0');
					_putchar(((y / 10) % 10) + '0');
					_putchar((y % 10) + '0')
				}
			}
			_putchar('\n');
		}
	}

}
