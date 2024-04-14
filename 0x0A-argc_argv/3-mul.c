#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: program that multiplies two numbers.
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

