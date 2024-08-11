#include "lists.h"

/**
* list_len - return length
* @h: param1
*
* Description: returns length of list
*
* Return: return length
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
