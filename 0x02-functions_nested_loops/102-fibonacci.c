#include <stdio.h>
/**
*main - prints fibonacci
*numbers
*Return: Always 0
*/

int main(void)
{
	int n = 50;
	unsigned long long fib1 = 1, fib2 = 2, next;
	int count = 0;

	printf("%llu, %llu, ", fib1, fib2);
for (count = 2; count < n; count++)
{
next = fib1 + fib2;
printf("%llu", next);

if (count < n - 1)
{
printf(", ");
}
else
{
printf("\n");
}
	fib1 = fib2;
	fib2 = next;
}

return (0);
}
