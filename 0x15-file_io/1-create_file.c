#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer for a input open file
 * @text_content: input to write the file
 * Return: returns 1 for success and -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
