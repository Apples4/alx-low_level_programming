#include "main.h"

/**
 * read_textfile -  a function that reads a text file and prints it
 * @filename: input char an array
 * @letters: number of characters
 * Return: an array
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, read_letters;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_letters = read(fd, buffer, letters);
	if (read_letters == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
	}
	close(fd);
	free(buffer);
	return (read_letters);
}
