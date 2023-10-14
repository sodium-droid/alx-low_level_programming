#include <stdio.h>
/**
*main - function that prints
*fibonacci terms
*Return: 0
*/

int main(void)
{
	int fib1 = 1, fib2 = 2, fib3;
	int count;

printf("%d, %d, ", fib1, fib2);

for (count = 2; count < 98; count++)
{
fib3 = fib1 + fib2;

if (count < 97)
{
	printf("%d, ", fib3);
}
else
{
printf("%d\n", fib3);
}
	fib1 = fib2;
	fib2 = fib3;
}

return (0);
}
