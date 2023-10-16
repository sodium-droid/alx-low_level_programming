#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: required string
 */

void print_rev(char *s)
{
int i, j = _strlen(s);


for (i = j - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
/**
 *_strlen - function that prints
 *the lenght of a string
 *@s: required string
 *Return: 0 (string lenght)
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);
}
