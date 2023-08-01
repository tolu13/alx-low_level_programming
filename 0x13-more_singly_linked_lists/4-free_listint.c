#include "lists.h"
/**
 * free_listint - function that frees a listint_t
 * @head: pointer to listint_t
 * @return : nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}
