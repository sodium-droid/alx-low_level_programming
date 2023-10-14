#include <stdio.h>
/**
*main - functions that prints
*the sum of even valued
*fibonacci terms
*Return: 0
*/

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	unsigned long even_sum = 0;

while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
even_sum += fib2;
}

next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}
printf("%lu\n", even_sum);

return (0);
}
