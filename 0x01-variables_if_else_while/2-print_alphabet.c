#include <stdio.h>
/**
*  main - A function that
*prints alphabets
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
		putchar('\n');
	}

	return (0);
}
