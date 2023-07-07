#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: arugement counter.
 * @argv: arguement vector.
 * Return: 0 - success.
*/

int main(int argc, char *argv[])
{
	int m, j, sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (j = 0; argv[m][j] != '\0'; j++)
		{
			if (!isdigit(argv[m][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
