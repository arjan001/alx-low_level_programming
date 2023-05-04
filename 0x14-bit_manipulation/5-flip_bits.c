/*
 * File: 5-flip_bits.c
 * Auth: edwin nyongesa
 * Date: May 4th, 2023
 */

#include "main.h"

/**
 * flip_bits - Calculates the number of bits that are different between
 *             two given numbers in their binary representation.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that are different between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	/* Count the number of different bits between n and m */
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

