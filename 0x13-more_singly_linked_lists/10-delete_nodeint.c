#include "lists.h"


/**
 * list_len - length of list
 * @head: Head
 * Desription: length of the list
 * Return: unsigned int
 */

unsigned int list_len(listint_t *head)
{
	unsigned int len = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}


/**
 * delete_nodeint_at_index - delete in nth
 *
 * @head: Head
 * @index: index
 * Description: delete node at index
 *
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int length = 0, i = 0;
	listint_t *ptr = *head;
	listint_t *prev = ptr;

	if (head == NULL)
		return (-1);

	length = list_len(*head);

	if (index >= length)
		return (-1);

	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (0);
	}
	while (ptr != NULL && (i < index))
	{
		prev = ptr;
		ptr = ptr->next;
		i++;
	}

	if (ptr == NULL)
		return (-1);

	prev->next = ptr->next;
	free(ptr);
	ptr = NULL;

	return (0);
}
