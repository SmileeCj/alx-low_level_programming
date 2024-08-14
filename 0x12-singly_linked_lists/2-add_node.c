#include "lists.h"
#include<string.h>

/**
* add_node - add node to first
* @head: param1
* @str: param2
*
* Description: add node
*
* Return: return adress of node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || !str)
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
		new_node->next = (*head);
		*head = new_node;
	}
	return (new_node);
}
