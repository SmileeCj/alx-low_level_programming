#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: inp
 * @needle: inp
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	while (haystack[i] != '\0') {
		if ((haystack[i] == needle[j]) && (haystack[i + 1] == needle[j + 1])) {
			return haystack + i;
		}
		i++;
	}
	return NULL;
}
