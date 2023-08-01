#include "lists.h"
/**
 * sum_listint - returns the sum of all data n of a linked list
 * @head: head of a list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head;
		head = head->next;
	}

	return (sum);
}
