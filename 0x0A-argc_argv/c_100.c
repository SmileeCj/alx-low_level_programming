#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: prints the minimum number of coins to make change.
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	static int c = 0;
	int count = 0;
	int chan[] = {25, 10, 5, 2, 1};
	int length = sizeof(chan) / sizeof(chan[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (argv[1][0] == '-')
		{
			for (i = 1; argv[1][i] < '\0'; i++)
			{
				if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
					return (0);
			}
		}
		else
		{
			for (j = 0; argv[1][j] != '\0'; j++)
			{
				if (!(argv[1][j] >= '0' && argv[1][j] <= '9'))
				{
					return (0);
				}
			}
		}
		
		c = atoi(argv[1]);
		if (c < 0)
		{
			printf("%d\n",0);
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
	return (0);

}

