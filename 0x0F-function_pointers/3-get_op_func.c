#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - get ops function pointer of type charr array
 * that accepst two input of int data type
 * @s: a character pointer
 * Return: one of op functions
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
