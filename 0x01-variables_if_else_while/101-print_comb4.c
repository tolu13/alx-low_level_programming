#include <stdio.h>

/**
 * main - prints 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)

					{
						putchar(',');

						ptchar(' ');
					}
							}
		}
	}

	 putchar('\n');
	return (0);
}

