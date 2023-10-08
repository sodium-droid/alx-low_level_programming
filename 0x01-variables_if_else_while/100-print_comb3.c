#include <stdio.h>
/**
*main - A script that prints combination
*of two digits without repitition and
*with commas and spaces.
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
{
		for (m = n + 1; m <= 9; m++)
{
		putchar(n + '0');
		putchar(m + '0');
	if (n != 8 || m != 9)
{
		putchar(44);
		putchar(32);
}
}
}
	putchar('\n');
	return (0);
}
