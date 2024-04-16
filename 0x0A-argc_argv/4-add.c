#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: Write a program that adds positive numbers.
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, j, c = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			c = c + atoi(argv[i]);
		}

		printf("%d\n", c);
		return (0);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}

