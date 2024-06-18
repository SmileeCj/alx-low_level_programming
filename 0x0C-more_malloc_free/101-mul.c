#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void arg_c(int count);
void if_digit(char *p);



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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
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
		 printf("Error\n");
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
			printf("Error\n");
			exit(98);
		}
	}

}
