#include "main.h"
/**
 *more_numbers - function that
 *prints "0 - 14", 10 times
 *Return: void
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j <= 9)
{
_putchar(j);
}
else
{
_putchar(j / 10);
_putchar(j % 10);
}
}
}
}
