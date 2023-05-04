#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if b is NULL or contains
 *         a character that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to print.
 */
void print_binary(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number to get the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - sets the value of a bit at a given index to 1.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - sets the value of a bit at a given index to 0.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - returns the number of bits needed to be flipped to get
 *             from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);

#endif /* MAIN_H */

