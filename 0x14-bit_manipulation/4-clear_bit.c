#include "main.h"

/**
 *clear_bit - set the bit at index position
 *to 0
 *@n: numberto be modified
 *@index: required bit position
 *Return: 1 (success) or -1 (error).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & (~mask);
	return (1);
}
