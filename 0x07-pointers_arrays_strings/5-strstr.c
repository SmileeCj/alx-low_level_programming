#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: inp
 * @needle: inp
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;
		
		for (; *ptr1 == *ptr2 && *ptr2 != '\0'; ptr1++,ptr2++)
			;
		return (haystack);
	}
	return (0);
}
