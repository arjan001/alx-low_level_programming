/*
* File: 2-append_text_to_file.c
* Author: edwin nyongesa
*/

#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file to append to.
* @text_content: The string to append to the end of the file.
*
* Return: On success, returns 1. On failure, returns -1.
*         Possible failures include:
*         - the file cannot be opened or written to
*         - filename is NULL or the user lacks write permission
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;
}

/* Open the file in append mode */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

/* Write the text content to the end of the file */
bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
close(fd);
return (-1);
}

/* Close the file and return success */
close(fd);
return (1);
}

