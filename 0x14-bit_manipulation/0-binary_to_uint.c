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
unsigned int result = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
result = result << 1;
else if (b[i] == '1')
result = (result << 1) | 1;
else
return (0);
}

return (result);
}

