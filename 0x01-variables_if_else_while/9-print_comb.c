#include <stdio.h>
/**
*main - A script that prints numbers
*with commas and spaces.
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
{
	putchar(n);
	if (n != 57)
{
		putchar(44);
		putchar(32);
}
	n++;
}
	putchar('\n');
	return (0);
}
