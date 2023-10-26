#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff_bit;
	int counter;

	diff_bit= n ^ m;
	counter = 0;

	while (diff_bit)
	{
		counter++;
		diff_bit &= (diff_bit - 1);
	}

	return (counter);
}
