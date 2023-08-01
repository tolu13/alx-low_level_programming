#include "lists.h"
/**
 * listint_len - function that returns number of elements
 * in a linked listint_t list
 * @h: pointer to listint
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
