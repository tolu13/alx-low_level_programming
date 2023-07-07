#include <stdio.h>
/**
 * main - prints the number of arguements passed into it
 * @Argc: counts the number of arguements passed into it
 * @Argv: arguement vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
