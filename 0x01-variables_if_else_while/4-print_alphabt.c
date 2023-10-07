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
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}
