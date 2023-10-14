#include <stdio.h>

/**
  * main - prints sum of multiples of 3 & 5
  * Return: 0.
  */

int main(void)
{
int sum = 0;
int limit = 1024;
int i;

for (i = 3; i < limit; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
{
		sum += i;
}
}
	printf("%d\n", sum);
	return (0);
}
