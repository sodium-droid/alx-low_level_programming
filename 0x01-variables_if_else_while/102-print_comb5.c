#include <stdio.h>
/**
*main - A function to print
*four digits separated by " " and ','
*Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
{
		for (j = i; j <= 99; j++)
{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
{
				putchar(',');
				putchar(' ');
}
}
}
putchar('\n');
return (0);
}
