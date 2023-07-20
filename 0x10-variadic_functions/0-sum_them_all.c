#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that writes a sum of all its parameter
 * @n: integer
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list to;
	unsigned int i, all_sum = 0;

	va_start(to, n);

	for (i = 0; i < n; i++)
	{
		all_sum += va_arg(to, int);
	}
	va_end(to);

	return (all_sum);
}
