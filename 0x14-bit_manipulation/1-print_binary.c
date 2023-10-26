#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp_memory_alloc;
	int shifts_bit;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp_memory_alloc = n, shifts_bit = 0; (temp_memory_alloc >>= 1) > 0; shifts_bit++;

	for (; shifts_bit >= 0; shifts_bit--)
	{
		if ((n >> shifts_bit) & 1)
			printf("1");
		else
			printf("0");
	}
}
