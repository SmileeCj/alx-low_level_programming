#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: Head
 *
 * Description: free list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
