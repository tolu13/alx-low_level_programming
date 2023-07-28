#include <stdio.h>
#include "lists.h"
/**
 * print_list  - function that prints all the elements of a lists_t list
 * @h: pointer
 * Return: nuber of nodes
 */

size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		total++;

	}

	return (total);
}
