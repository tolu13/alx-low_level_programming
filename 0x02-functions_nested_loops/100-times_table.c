nclude "main.h"

/**
 * print_times_table - print the n times table
 * @n: number of tge times table
 *
 * Return: Always 0
 *
 */
 
void print_times_table(int n)
{
	int i, j, k;
	
	if ( >= 0 && n <= 15)
	{
		for ( i = 0; i <= n; i++)
		{
			for ( j = 0; j <= n; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar( k + '0')
				}

				else if (k < 10 && k != 0)
				{
					putchar(',');
					_putchar(' ');
					_putchar( ' ');
					_putchar(' ');
					_putchar (k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');

					_putchar( ' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
				       _putchar(( k / 10) %10) + '0');
			       		_putchad((k % 10) + '0');
			 	}

			}
			_putchar('\n');
		}
	}
}