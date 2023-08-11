#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: an input file
 * @text_content: an input of strings
 * Return: 1 if successful and -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
