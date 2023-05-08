#ifndef MAIN_H
#define MAIN_H

/*
*Header file that includes function prototypes for all functions
*in the 0x14-file_io directory.
*Written by Edwin Nyongesa.
*Description: This file contains the necessary function prototypes for the
*functions implemented in the 0x14-file_io directory.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
