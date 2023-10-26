#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total_bits, power;
	int len_bit;

	if (b == NULL)
		return (0);

	for (len_bit = 0; b[len_bit]; len_bit++)
	{
		if (b[len_bit] != '0' && b[len_bit] != '1')
			return (0);
	}

	for (power = 1, total_bits = 0, len_bit--; len_bit >= 0; len_bit--, power *= 2)
	{
		if (b[len_bit] == '1')
			total_bits += power;
	}

	return (total_bits);
}
