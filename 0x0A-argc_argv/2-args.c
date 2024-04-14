#include <stdio.h>

/**
* main - is entry function
* @argc: int
* @argv: array
* Description: prints all arguments it receives.
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}

