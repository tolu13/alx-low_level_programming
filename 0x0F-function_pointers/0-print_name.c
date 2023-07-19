#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
