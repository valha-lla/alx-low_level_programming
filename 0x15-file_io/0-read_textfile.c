#include "main.h"

/**
 *read_textfile - read text file and print to POSIX
 *function reads and prints nbytes from a files
 *@filename: file path or name
 *@letters: number of letters to read and print
 *
 *Return: letters on succes, 0 on failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t nrbytes, nwbytes;

	buf = malloc(sizeof(char) * (letters));

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nrbytes = read(fd, buf, letters);

	if (nrbytes == -1)
	{
		close(fd);
		return (0);
	}

	nwbytes = write(STDOUT_FILENO, buf, nrbytes);
	if (nwbytes == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);

	free(buf);

	return (nwbytes);

}
