#include "main.h"

/**
 * append_text_to_file - funct. that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t w_file;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content != NULL)
	{
		w_file = write(fd, text_content, len);
		if (w_file == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
