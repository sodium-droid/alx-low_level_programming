#include "main.h"
/**
 *puts2 - funtion that prints
 *every other element in a string
 *@str: given string.
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
if (i % 2 == 0)
{
_putchar(str[i]);
}
_putchar('\n');
}
