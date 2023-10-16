#include "main.h"
/**
 *print_array - function that
 *prints all elemnts in an
 *array
 *@a: array required.
 *@n: number of elements in "a".
 */

void print_array(int *a, int n)
{
	int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
}
_putchar('\n');
}
