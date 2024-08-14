#include "lists.h"

/**
 * pop_listint - pop list
 *
 * @head: Head
 *
 * Description: pop list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	int i = 0;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = ptr;

	return (i);
}
