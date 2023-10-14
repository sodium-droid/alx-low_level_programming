#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function that prints
 *numbers in order to 98
 *@n: number to start print from.
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
{
	for (; n <= 98; n++)
{
	if (n == 98)
{
	printf("%d", n);
	printf("\n");
	break;
}
	else
	printf("%d, ", n);
}
}
	else
{
	for (; n >= 98; n--)
{
	if (n == 98)
{
	printf("%d", n);
	printf("\n");
	break;
}
	else
	printf("%d, ", n);
}
}
}
