#include <stdio.h>

/**
 * main - prints alphabets except e and q
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char p = 'a';

	while (p <= 'z')
	{
		if (p != 'e' && p != 'q')
	{
		putchar(p);

	}
		p++;

	}
		putchar('\n');

	return (0);

}
