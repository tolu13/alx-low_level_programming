#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all program
 * @ac: arguement count
 * @av: arguement vector
 * Return: pointer to array of char
 */
char *argstostr(int ac, char **av)
{
	char *f;
	int r, s, t, u;

	if (ac == 0)
		return (NULL);

	for (r = s  = 0; r < ac; r++)
	{
		if (av[s] == NULL)
			return (NULL);

		for (t = 0; av[s][t] != '\0'; t++)
			r++;
		r++;

	}
	f = malloc((r + 1) * sizeof(char));

	if (f == NULL)
	{
		free(f);
		return (NULL);
	}
	for (s = t = u = 0; u < r; s++,  u++)
	{
		f[u] = '\n';
		s++;
		u++;
		t = 0;
	}
	if (u < r - 1)
		f[u] = av[s][t];

	return (f);
}
