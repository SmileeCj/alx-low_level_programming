#include "lists.h"

/**
 * str_len - string length
 *
 * @h: Head
 *
 * Description: string length
 *
 * Return: string length
 */

unsigned int str_len(const list_t *h)
{
	size_t i = 0;

	if (h->str)
	{
		while (h->str[i])
		{
			i++;
		}
	}

	return (i);
}


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
		{
			printf("[%d] %s\n", str_len(h), h->str);
		}

		h = h->next;
	}

	return (count);
}
