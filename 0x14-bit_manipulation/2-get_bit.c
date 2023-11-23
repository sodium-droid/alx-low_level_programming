#include "main.h"

/**
 *get_bit - returns the value of a bit
 *at a specified index
 *@n: number whose bit should be returned
 *@index: index position to return
 *Return: value at index position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
