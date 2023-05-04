/*
 * File: 1-print_binary.c
 * Auth: edwin nyongesa
 */

#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
    /*If n great than 1recursiv call prt_bnr with the right-shiftd value of n*/
	if (n > 1)
	{
		print_binary(n >> 1);
	}

    /* Print the least significant bit of n as a character */
	_putchar((n & 1) + '0');
}

