#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * ch_free_grid - funtion to free a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
*/

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
*/

char **strtow(char *str)
{
	char **pout;
	unsigned int c, height, i, j, b;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	pout = malloc((height + 1) * sizeof(char *));
	if (pout == NULL || height == 0)
	{
		free(pout);
		return (NULL);
	}
	for (i = b = 0; i < height; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				pout[i] = malloc((c - b + 2) * sizeof(char));
				if (pout[i] == NULL)
				{
					ch_free_grid(pout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			pout[i][j] = str[b];
		pout[i][j] = '\0';
	}
	pout[i] = NULL;
	return (pout);
}
