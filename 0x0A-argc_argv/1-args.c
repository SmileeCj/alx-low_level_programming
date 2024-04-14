#include <stdio.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: prints the number of arguments passed into it
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		if (argc == 1)
			printf("%d\n", 0);
		else
		{
			int i;

			for (i = 1; i < argc; i++)
				;
			printf("%d\n", i - 1);
		}
	}
	return (0);
}

