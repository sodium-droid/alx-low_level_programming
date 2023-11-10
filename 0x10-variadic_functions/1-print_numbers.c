#include "variadic_functions.h"

/**
 *print_numbers - print all arguments seperated by
 *a "separator"
 *@separator: separates the numbers
 *@n: number of optional arguments
 *Return: string of numbers with separators.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));
	if (separator && i < (n - 1))
		printf("%s", separator);
	}
printf("\n");
va_end(args);
}
