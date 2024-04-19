#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* isDigit - is secondary fucntion
* @p: arry
* Description: check if inpu is correct
* Return: 0 (success)
*/

int isDigit(char **p)
{
	int i, j;

	if (p[1][0] == '-')
	{
		for (i = 1; p[1][i] != '\0'; i++)
		{
			if (!(p[1][i] >= '0' && p[1][i] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		for (j = 0; p[1][j] != '\0'; j++)
		{
			if (!(p[1][j] >= '0' && p[1][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: prints the minimum number of coins to make change.
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int chan[] = {25, 10, 5, 2, 1};
	int i = 0, count = 0, length = sizeof(chan) / sizeof(chan[0]);
	static int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (isDigit(argv) != 0)
		{
			return (1);
		}
		else
		{

			c = atoi(argv[1]);

			if (c < 0)
			{
				printf("%d\n", 0);
			}

			i = 0;

			while (c)
			{
				while (length && c >= chan[i])
				{
					c = c - chan[i];
					count++;
				}
				i++;
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
