#include "main.h"
#include <stdlib.h>

/**
 *print_to_98 - function that prints
 *numbers in order to 98
 *@n: number to start print from.
 * Return: void
 */

void print_to_98(int n)
{
int i, j;

while ((n != 98))
{
i = (n / 10);
j = (n % 10);

if ((n >= 10) || (n <= -10))
_putchar(i + '0');
_putchar(j + '0');
_putchar(',');
_putchar(' ');
if (n < 98)
n++;
else
n--;
}

if (n == 98)
{
i = (n / 10);
j = (n % 10);

_putchar(i);
_putchar(j);
}
}
