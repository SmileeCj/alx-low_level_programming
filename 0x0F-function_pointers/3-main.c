#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *op_funct;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_funct = argv[2];

	if (get_op_func(op_funct) == NULL || op_funct[1] != '\0')
		printf("Error\n"), exit(99);

	if ((*op_funct == '/' && b == 0) || (*op_funct == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op_funct)(a, b));

	return (0);
}
