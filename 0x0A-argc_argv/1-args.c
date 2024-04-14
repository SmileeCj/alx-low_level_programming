#include <stdio.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: prints the number of arguments passed into it
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	else
		return (0);
}

