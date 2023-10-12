#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head of the list
 * Return: returrns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
