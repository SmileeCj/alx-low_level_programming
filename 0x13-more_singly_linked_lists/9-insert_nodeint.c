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

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}

	return (len);
}


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
	unsigned int length = 0, i = 0;
	listint_t *new_node = NULL;
	listint_t *ptr = *head;
	listint_t *prev = ptr;

	if (head == NULL)
		return (NULL);

	length = list_len(*head);

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx >= length)
	{
		return (NULL);
	}
	if (idx == 0 || !length)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL && i < idx)
	{
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	prev->next = new_node;
	new_node->next = ptr;

	return (new_node);
}
