#include "main.h"

/**
 * int_isdigit - checks if its a number or letter
 *
 * Return: 1 if its a numberband 0 fot otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
