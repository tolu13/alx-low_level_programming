#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint list
 * @head: pointer to the list
 * @n: int to new node
 * Return: new nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
