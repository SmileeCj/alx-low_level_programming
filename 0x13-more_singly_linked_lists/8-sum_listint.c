#include "lists.h"

/**
 * sum_listint - calculate sum
 *
 * @head: Head
 * Description: calculate the sum of the list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
