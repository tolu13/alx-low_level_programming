#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 * @c: the character to be checked
 * Return: Always 0
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
