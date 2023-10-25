#include "main.h"
/**
 *_puts_recursion - function that
 *prints a string by recursion.
 *@s: pointer to string
 * Return: *s
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
_putchar('\n');
}
