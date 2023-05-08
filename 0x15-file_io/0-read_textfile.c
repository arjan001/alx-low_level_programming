/*
* File: 0-read_textfile.c
* Auth: edwin nyongesa
*/

#include "main.h"
#include <stdlib.h>

/**
* read_textfile - Read and print a given number of characters from a text file
*                 to standard output.
* @filename: Pointer to the name of the file to be read.
* @chars: Number of characters to read and print.
*
* Return: 0 if the function fails or filename is NULL,
*         otherwise the actual number of bytes the function can read and print.
*/
ssize_t read_textfile(const char *filename, size_t chars)
{
	ssize_t fd, read_chars, written_chars;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * chars);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	read_chars = read(fd, buf, chars);
	written_chars = write(STDOUT_FILENO, buf, read_chars);

	if (fd == -1 || read_chars == -1 || written_chars == -1 || written_chars != read_chars)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (written_chars);
}

