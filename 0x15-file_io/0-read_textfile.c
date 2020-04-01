#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file name
 * @letters:number of letter to read and print
 * Return: numebr of letters read and printed
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readfd, writefd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	readfd = read(fd, buf, letters);
	if (readfd == -1)
	{
		free(buf);
		return (0);
	}

	writefd = write(STDOUT_FILENO, buf, readfd);
	if (writefd == -1)
		return (0);
	free(buf);
	close(fd);
	return (writefd);
}
