#include <stdio.h>

/**
* binary_to_uint - convert binary
* @b: param1
*
* Description: conver binary to unsigned int
*
* Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i, j = 0;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len++;
	}

	i = len - 1;

	while (i >= 0)
	{
		res += (b[i] - '0') * (1 << j);
		i--;
		j++;
	}
	return (res);
}
