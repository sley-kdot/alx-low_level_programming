#include "main.h"

/**
 * read_textfile - funct. that reads a text and prints its standard output
 * @filename: point to the file path
 * @letters: number of letters to be read and printed
 *
 * Return: 0 if the file can not be opened or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_file, w_file;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char *) * letters);

	if (buf == NULL)
		return (0);

	r_file = read(fd, buf, letters);
	w_file = write(STDOUT_FILENO, buf, r_file);

	close(fd);
	free(buf);

	return (w_file);
}
