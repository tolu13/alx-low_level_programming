#include "lists.h"
/**
 * pop_listint - function that delets the head node
 * @head: pointer to listit list
 * Return: always 0
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *pop;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	hnode = temp->n;
	pop = temp->next;

	free(temp);

	*head = pop;

	return (hnode);
}
