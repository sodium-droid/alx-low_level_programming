#include "variadic_functions.h"

/**
 *print_strings - sprint all arguments seperated by
 *a "separator"
 *@separator: separates the numbers
 *@n: number of optional arguments
 *Return: string of numbers with separators.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);
	str == NULL ? printf("(nil)") : printf("%s", str);
	if (separator && i < (n - 1))
		printf("%s", separator);
	}
printf("\n");
va_end(args);
}
