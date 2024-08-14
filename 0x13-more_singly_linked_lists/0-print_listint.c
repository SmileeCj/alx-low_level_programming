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
	size_t i = 0;
	const listint_t *ptr = h;


		while (ptr != NULL)
		{
			i++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	return (i);

}
