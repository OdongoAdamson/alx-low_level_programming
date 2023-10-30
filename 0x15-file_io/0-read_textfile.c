#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file
 * @filename: the text file
 * @letters: letters being read
 * Return: w- actual number and 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fd, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fd);
	return (w);
}
