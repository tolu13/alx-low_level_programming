#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strins followed by a new line
 * @separator: pointer to a constant separator
 * @n: start of input variable
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list to;
	unsigned int i;
	char *str;

	va_start(to, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(to, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(to);
	printf("\n");
}
