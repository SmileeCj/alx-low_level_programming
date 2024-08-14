#include "lists.h"

/**
 * get_nodeint_at_index - get the address of index node
 *
 * @head: Head
 * @index: index
 * Description: get the adress
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
