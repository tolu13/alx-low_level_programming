#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char t;

	i = 0;
	while (i < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		i++;
	}
}
