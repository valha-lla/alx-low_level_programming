#include "main.h"

/**
 * apend_text_to_file - append text to end of file
 * @filename: pathname of the files.
 * @text_content: content to append.
 *
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrbytes;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		wrbytes = write(fd, text_content, strlen(text_content));

		if (wrbytes == -1)
			return (-1);
	}

	close(fd);

	return (1);

}
