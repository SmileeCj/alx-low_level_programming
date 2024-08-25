#include "main.h"

/**
 * create_file - creat a file
 *
 * @filename: param1
 * @text_content: param2
 *
 * Description: create a new file
 *
 * Return: int
*/


int create_file(const char *filename, char *text_content)
{
	int fd = -1;
	ssize_t w_count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (0);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w_count = write(fd, text_content, sizeof(text_content));

	if (w_count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
