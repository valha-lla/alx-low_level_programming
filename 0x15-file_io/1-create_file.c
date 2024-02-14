#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - a function that creates a file
 * with rw----- permissions, file exists trunc it
 * @filename: pathname for file to create
 * @text_content: null terminated content to write
 *
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wrbytes;
	mode_t oldUmask;

	oldUmask = umask(0);

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	umask(oldUmask);

	if (fd == -1)
		return (-1);
	if (text_content)
		wrbytes = write(fd, text_content, strlen(text_content));
	if (wrbytes == -1)
		return (-1);

	close(fd);

	return (1);
}
