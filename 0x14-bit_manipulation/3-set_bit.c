#include "main.h"

/**
 *set_bit - set the bit at index position
 *to 1
 *@n: numberto be modified
 *@index: required bit position
 *Return: 1 (success) or -1 (error).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | mask;
	return (1);
}
