#include "main.h"
int calculate_sqrt(int num, int root);
int _sqrt_recursion(int n);
/**
 * calculate_sqrt - finds the square root
 * @num: the number to find the square root
 * @root: the root
 * Return: the natural square root
 */
int calculate_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (calculate_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square of a number
 * @n: integer
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (calculate_sqrt(n, root));
	}
}
