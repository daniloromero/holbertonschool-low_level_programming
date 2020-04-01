#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: text file name
 * @text_content: content for file
 * Return: numebr of letters read and printed
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
*/

int create_file(const char *filename, char *text_content)
{
	int fd, writefd, i = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != 0)
			i++;
		writefd = write(fd, text_content, i);
		if (writefd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
