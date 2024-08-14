#include "lists.h"
#include<string.h>

/**
* add_node_end - add node to te end
* @head: param1
* @str: param2
*
* Description: add node
*
* Return: return adress of node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	} else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		new_node->next = NULL;
		tail->next = new_node;
	}
	return (new_node);
}
