#include <stdio.h>
/**
*main - A script that prints combination
*of two digits without repitition and
*with commas and spaces.
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int o, n, m;

	for (n = 0; n <= 7; n++)
{
		for (m = n + 1; m <= 8; m++)
{
			for (o = m + 1; o <= 9; o++)
{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
	if (n != 7 || m != 8 || o != 9)
{
		putchar(44);
		putchar(32);
}
}
}
}
	putchar('\n');
	return (0);
}
