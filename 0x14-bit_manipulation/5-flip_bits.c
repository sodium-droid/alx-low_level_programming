#include "main.h"

/**
 *flip_bits - returns the count of bits
 *to be flipped to make "n" == "m"
 *@n: number 1
 *@m: number 2
 *Return: count of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check = n ^ m;
	unsigned int count = 0;

	while (check > 0)
	{
		if (check & 1)
			count++;
		check >>= 1;
	}
	return (count);
}
