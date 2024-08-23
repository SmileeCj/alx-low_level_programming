#include "main.h"

/**
 * read_textfile - print a number of bytes
 *
 * @filename: param1
 * @letters: param2
 *
 * Description: printing number of bytes
 *
 * Return: number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = -1, count = 0, w_count = 0;
	char BUFFER[BUF_S] = {0};

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, BUFFER, letters);
	w_count = write(1, BUFFER, count);

	if (count == -1)
		return (0);

	close(fd);
	return (w_count);
}
