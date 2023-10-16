#include "main.h"
/**
 *puts2 - funtion that prints
 *every other element in a string
 *@str: given string.
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
