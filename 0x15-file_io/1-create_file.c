/*
 * File: 1-create_file.c
 * Auth: edwin nyongesa
 */

#include "main.h"

/**
 * create_file - Create a file and write to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}

