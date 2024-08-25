#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append file
 *
 * @filename: param1
 * @text_content: param2
 *
 * Description: append file
 *
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = -1;
	ssize_t w_count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w_count = write(fd, text_content, strlen(text_content));

	if (w_count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
