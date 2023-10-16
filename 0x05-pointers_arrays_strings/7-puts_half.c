#include "main.h"

/**
 *puts_half - A functions that
 *prints half of a string
 *@str: the rewuired string.
 */

void puts_half(char *str)
{
int i, j, k = _strlen(str);

j = (k - 1) / 2;

for (i = j + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
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
