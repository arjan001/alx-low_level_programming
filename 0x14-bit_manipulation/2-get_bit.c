/*
 * File: 2-get_bit.c
 * Author: edwin nyongesa
 */
#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If index is invalid - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(n) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) != 0);
}

