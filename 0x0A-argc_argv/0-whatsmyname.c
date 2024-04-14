#include <stdio.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description:  program that prints its name
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

