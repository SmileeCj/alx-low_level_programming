#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: int
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	if (argc < 3)
	{	
		printf("there is an Error\n");
		return (1);
	}
	else
	{I	
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	return (0);
}
