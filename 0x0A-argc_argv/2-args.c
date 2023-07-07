#include <stdio.h>
/**
 * main - prints all arguements it recievesz
 * @argc: Arguement counter
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
