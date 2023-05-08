/*
 * File: 3-cp.c
 * Auth: Cedwin nyongesa
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *filename);
void close_fd(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes of memory for a buffer.
 * @filename: The name of the file for which the buffer is being allocated.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	int retval;

	retval = close(fd);

	if (retval == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with code 97 if the number of arguments is incorrect
 *              Exits with code 98 if file_from doenst exist or cant be read
 *              Exits with code 99 if file_to cannot be created or written to
 *              Exits with code 100 if either file_to or file_frm cnt be closd
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	read_count = read(source_fd, buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || read_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_count = write(dest_fd, buffer, read_count);
		if (dest_fd == -1 || write_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Cannot write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_count = read(source_fd, buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_count > 0);

	free(buffer);
	close_fd(source_fd);
	close_fd(dest_fd);

	return (0);
}

