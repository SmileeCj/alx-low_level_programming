#include "lists.h"

/**
 * add_nodeint - add int node
 *
 * @head: Head
 * @n: n
 *
 * Description: calculate list length
 *
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
