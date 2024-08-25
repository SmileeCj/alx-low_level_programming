#include "main.h"
#include <string.h>
/**
 * main - entry function
 *
 * @argc: param1
 * @argv: param2
 *
 * Description: copy from file to file
 *
 * Return: int
*/

int main(int argc, char **argv)
{
	int fd_from = -1, fd_to = -1;
	ssize_t w_count = 0, r_count = 0;
	char buffer[BUF_S] = {0};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ERR_ARG), exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_RD), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_WR), exit(99);

	while ((r_count = read(fd_from, buffer, BUF_S)) > 0)
	{
		if (write(fd_to, buffer, r_count) != r_count)
			dprintf(STDERR_FILENO, ERR_WR), exit(99);
	}

	if (r_count == -1)
		dprintf(STDERR_FILENO, ERR_RD), exit(98);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_to), exit(100);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);

	return (0);
}
