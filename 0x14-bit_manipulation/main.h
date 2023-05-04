#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>

/* main.h: header file containing function prototypes */

unsigned int binary_to_uint(const char *b);
/* Convert a binary string to an unsigned integer */

int check_valid_string(const char *b);
/* Check if a string is a valid binary string */

int clear_bit(unsigned long int *n, unsigned int index);
/* Set the bit at a given index to 0 */

unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* Count the number of bits that are different in two numbers */

int get_bit(unsigned long int n, unsigned int index);
/* Get the value of the bit at a given index */

int get_endianness(void);
/* Determine the endianness of the machine */

int set_bit(unsigned long int *n, unsigned int index);
/* Set the bit at a given index to 1 */

void print_binary(unsigned long int n);
/* Print a number in binary */

int _putchar(char c);
/* Write a character to stdout */

#endif

