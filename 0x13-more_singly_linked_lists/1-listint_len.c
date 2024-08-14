#include "lists.h"

/**
 * listint_len - list length
 *
 * @h: Head
 *
 * Description: calculate list length
 *
 * Return: unsigned
 */


size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);

}
