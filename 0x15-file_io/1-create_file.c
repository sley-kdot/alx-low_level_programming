#include "main.h"

/**
 * create_file - funct that creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	size_t w_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content == NULL)
		text_content = "";

	w_file = write(fd, text_content, len);
	if (w_file == -1)
		return (-1);

	close(fd);

	return (1);
}
