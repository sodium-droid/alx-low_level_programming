#include "main.h"

/**
 *_strlen_recursion - function that
 *determines the length of a string by
 *recursion
 *@s: pointer to string
 *Return: length of string pointed to.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
{
	return (1 + _strlen_recursion(s + 1));
}
	return (0);
}
