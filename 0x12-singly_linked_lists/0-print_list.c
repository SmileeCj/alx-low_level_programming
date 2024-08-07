#include "lists.h"

/**
* print_list - print out a name
* @h: param1
*
* Description: print a lis
*
* Return: number of elements
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (count);
}
