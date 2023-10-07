#include <stdio.h>
/**
*  main - A function that
*prints alphabets
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}
	putchar('\n');
	return (0);
}
