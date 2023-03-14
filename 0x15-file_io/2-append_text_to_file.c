#include "main.h"

/**
 * append_text_to_file - appends text in the file
 * @filename: file name
 * @text_content: appended text
 *
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
