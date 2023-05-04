/*
* Auth: edwin nyongesa
* File: 0-binary
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
/* num is the converted number, mult is the current binary multiplier */
	unsigned int num = 0, mult = 1;
/* len is the length of the binary string */
	int len;

/* Check if b is null */
	if (b == '\0')
		return (0);

/* Determine length of b */
	for (len = 0; b[len];)
		len++;

/* Convert binary string to unsigned integer */
	for (len -= 1; len >= 0; len--)
	{
/* If char is not a binary digit, return 0 */
		if (b[len] != '0' && b[len] != '1')
			return (0);

/* Add digit to the converted number */
		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}

