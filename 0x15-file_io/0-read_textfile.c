#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed, or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fdd = open(filename, O_RDONLY);

	if (fdd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fdd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}

