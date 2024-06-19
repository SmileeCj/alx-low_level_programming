#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void arg_c(int count);
void if_digit(char *p);
void prints(char *st);
int _atoi(char *p);
int rev(int n);
void p_int(int n);
void print_str(int n);
/**
* main - entry program
* @argc: param 1
* @argv: param 2
* Description: entry program
* Return: an int
*/

int main(int argc, char **argv)
{
	int num1, num2, result;

	arg_c(argc);

	if_digit(argv[1]);
	if_digit(argv[2]);

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;
	print_str(result);

	return (0);
}

/**
 * arg_c - check the correct args
 * @count: param
 * Description: check arguments count
 * Return: nothing
 */

void arg_c(int count)
{
	if (count != 3)
	{
		 prints("Error\n");
		 exit(98);
	}
}

/**
 * if_digit - check if all char are digits
 * @p: param
 * Description: check if digit
 * Return: Nothing
 */

void if_digit(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] > '9' && p[i] < '0')
		{
			prints("Error\n");
			exit(98);
		}
	}
}

/**
 * prints - print string
 * @st: param
 * Description: print string
 * Return: nothing
 */

void prints(char *st)
{
	int i = 0;

	while (st[i])
	{
		_putchar(st[i++]);
	}
}

/**
 * _atoi - convert string to int
 * @p: param
 * Description: convert string to int
 * Return: int
 */

int _atoi(char *p)
{
	int i = 0, res = 0, sign = 1;

	if (p[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (p[i] != '\0')
	{
		res = res * 10 + p[i] - '0';
		i++;
	}

	return (res * sign);
}


/**
 * print_str - print string
 * @n: param
 * Description: print string
 * Return: nothing
 */
void print_str(int n)
{
	int i = 0, count = 0, num = n, rest = 0;
	char *p;

	while (num != 0)
	{
		num /= 10;
		count++;
	}
	p = malloc(sizeof(char) * (count + 1));
	if (p == NULL)
	{
		printf("memory not reserved");
		exit(89);
	}
	while (i < count)
	{
		rest = n % 10;
		n = n / 10;

		p[i] = rest + '0';
		i++;
	}
	p[i] = '\0';

	for (i = (count - 1); i >= 0; i--)
	{
		putchar(p[i]);
	}
	putchar('\n');
	free(p);
}
