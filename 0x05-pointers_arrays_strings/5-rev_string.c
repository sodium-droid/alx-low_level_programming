#include "main.h"

/**
 *rev_string - prints the
 *reverse of a string
 *@s: the given string
 */

void rev_string(char *s)
{
int i, j, k = _strlen(s);
char c;

for (i = 0, j = k - 1; i < j; j--, i++)
{
	c = s[i];
	s[i] = s[j];
	s[j] = c;
}

}
/**
 *_strlen - function that prints
 *the lenght of a string
 *@s: required string
 *Return: 0 (string lenght)
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
return (count);
}
