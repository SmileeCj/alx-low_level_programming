#include "main.h"
#include <string.h>

/**
 * check - check if a a palinderom
 * @str : firsParm
 * @start : paramOne
 * @end : paramTwo
 * Return: Always returns int.
 */

int check(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (str[start] != str[end])
	{
		return (0);
	}
	else
		return (check(str, start + 1, end - 1));
}

/**
 * is_palindrome - it check if str a palindrome
 * @str : paramOne
 * Return: Always returns int.
 */

int is_palindrome(char *str)
{
	return (check(str, 0, strlen(str) - 1));
}
