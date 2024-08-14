#include "lists.h"

/**
 * add_nodeint_end - add int node
 *
 * @head: Head
 * @n: n
 *
 * Description: add node in the end
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tail = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}

	tail->next = new_node;
	return (new_node);
}
