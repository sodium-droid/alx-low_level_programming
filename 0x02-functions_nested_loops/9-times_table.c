#include "main.h"
/**
 * times_table - A function that
 * prints numbers in multiples of 0-9.
 * Return: 0
 */

void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar((i * j) + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
return (0);
}
