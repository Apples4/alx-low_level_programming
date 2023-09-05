#include "main.h"

/**
 * read_textfile - function that prints text file to standard output
 * @filename: an input file with the texts
 * @letters: number of letter to be printed out
 * Return: Prints to STDOUT
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, rd, wrn;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	wrn = write(1, buffer, rd);
	if (wrn == -1)
	{
		free(buffer);
		return (0);
	}
	if (wrn != rd)
	{
		return (0);
	}
	return (wrn);
}
