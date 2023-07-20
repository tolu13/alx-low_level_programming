#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that print numbesrs followed by a new line
 * @separator: pointer to constant seperator
 * @n: start of input variables
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list to;
	unsigned int i;

	va_start(to, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(to, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(to);
	printf("\n");


}

