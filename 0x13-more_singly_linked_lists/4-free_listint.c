#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: Head
 *
 * Description: free list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}

}
