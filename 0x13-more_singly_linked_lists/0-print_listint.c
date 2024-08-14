#include "lists.h"

/**
 * print_listint - list length
 *
 * @h: Head
 *
 * Description: list length
 *
 * Return: size_t
 */


size_t print_listint(const listint_t *h)
{
	if (h)
	{
		size_t i = 0;
		const listint_t *ptr = NULL;
		ptr = h;

		while (ptr != NULL)
		{
			i++;
			ptr = ptr->next;
		}
		return (i);
	}

	return (0);

}
