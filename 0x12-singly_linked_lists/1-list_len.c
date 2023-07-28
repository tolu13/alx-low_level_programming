#include "lists.h"
/**
 * list_len - returns the numn=ber of elements in list_t list
 * @h: pointer
 * Return: lsit
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
		return (count);
}
