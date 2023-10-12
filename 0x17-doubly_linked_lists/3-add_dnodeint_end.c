#include "lists.h"

/**
 * add_dnodeint_end -  function that adds a new node at
 * the end of a dlistint_t list.
 * @head: head of the node
 * @n: value of the element
 * Return: address of new elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
