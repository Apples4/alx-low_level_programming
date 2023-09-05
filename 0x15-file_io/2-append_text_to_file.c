#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: input name of the file
 * @text_content: text to be atted to the file
 * Return: 1 on success, -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	while (*(text_content + i) != '\0')
	{
		i++;
	}
	wr = write(fd, text_content, i);
	if (wr == -1 && wr != i)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
