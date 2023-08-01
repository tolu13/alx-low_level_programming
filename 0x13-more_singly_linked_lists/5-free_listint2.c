#include "lists.h"
/**
 * free_listint2 - function that frees list
 * @head: pointer to listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *i;

	if (head != NULL)
	{
		i = *head;

		while ((temp = i) != NULL)
		{
			i = i->next;
			free(temp);
		}
		*head = NULL;
	}
}
