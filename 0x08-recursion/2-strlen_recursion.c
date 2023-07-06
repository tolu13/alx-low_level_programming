#include "main.h"
/**
 * _strlen_recursion - function that prints length of string
 * @s: character pointer
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
