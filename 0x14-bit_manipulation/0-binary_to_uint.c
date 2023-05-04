/*
* Author: edwin nyongesa
* File: 0-binary_to_uint.c
*/

#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string of 0 and 1 chars.
*
* Return: If b is NULL or contains chars not 0 or 1 - 0.
*         Otherwise - the converted number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

/* Check if b is null */
	if (b == '\0')
		return (0);

/* Calculate the length of the string */
	for (len = 0; b[len];)
		len++;

/* Convert the binary string to an unsigned integer */
	for (len -= 1; len >= 0; len--)
	{
/* Check if the character is a valid binary digit */
		if (b[len] != '0' && b[len] != '1')
			return (0);

/* Convert the binary digit to an integer and add it to the result */
		num += (b[len] - '0') * mult;

/* Multiply the multiplier by 2 to calculate the next digit's value */
		mult *= 2;
	}

	return (num);
}

