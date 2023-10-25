#include "main.h"

/**
 *_pow_recursion - function that
 *prints the power of a number by another number
 *@x: the given num.
 *@y: the power required
 *Return: power of x
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, (y - 1)));
}
