#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - entry function
* @argc: param1
* @argv: param2
*
* Description: main function
*
* Return: int
*/

int main(int argc, char **argv)
{
	int (*op_fun)(int, int);
	char *p_sign = &argv[2][0];
	int num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_fun = get_op_func(argv[2]);
	if (!op_fun)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*p_sign == '/' || *p_sign == '%') && !num2)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_fun(num1, num2));
	return (0);
}
