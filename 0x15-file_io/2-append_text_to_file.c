#include "main.h"

/**
 * append_text_to_file - append to a file
 * Description: function to append text to end of file
 * @filename: pathname of the file
 * @text_content: text to appen
 *
 * Return: 1 on succes or -1 on failure
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
