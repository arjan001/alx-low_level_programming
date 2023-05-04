/*
 * File: 100-get_endianness.c
 * Author: edwin nyongesa
 * Date: May 4th, 2023
 */

#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: If the system is big-endian, returns 0.
 *         If the system is little-endian, returns 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *byte_ptr = (char *)&num;

	/* Check the value of the first byte in memory to determine endianness */
	if (*byte_ptr == 1)
		return (1);

	return (0);
}

