#include "main.h"

/**
 *_isdigit -function that checks
 *if 'c' is a digit.
 *@c: character to check
 *Return: 1 or 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
