#include "lists.h"

/**
 * print_listint - print list
 *
 * @h: Head
 *
 * Description: print list length and data
 *
 * Return: unsigned
 */


size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);

}
