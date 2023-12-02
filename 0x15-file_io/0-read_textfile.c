#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the file name to be read
 * @letters: number of letters to read and print
 * Return: the number of letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fil = open(filename, O_RDONLY);

	if (fil == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fil, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fil);

	free(buf);
	return (nwr);
}
