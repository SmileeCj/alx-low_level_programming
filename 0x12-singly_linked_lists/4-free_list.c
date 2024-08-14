#include "lists.h"
#include<string.h>

/**
* free_list - free list
* @head: param1
*
* Description: delete list
*
* Return: Nothing
*/


void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
