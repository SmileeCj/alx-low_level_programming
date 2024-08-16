#include "lists.h"

/**
 * insert_nodeint_at_index - insert in nth
 *
 * @head: Head
 * @idx: index
 * @n: data
 * Description: insert node at index
 *
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	listint_t *prev = ptr;

	unsigned int len = 0, i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	ptr = *head;

	if (idx >= len)
	{
		free(new_node);
		return (NULL);
	}

	while (ptr->next != NULL && i < idx)
	{
		prev = ptr;
		ptr = ptr->next;
		i++;
	}

	new_node->n = n;
	prev->next = new_node;
	new_node->next = ptr;

	return (new_node);
}
