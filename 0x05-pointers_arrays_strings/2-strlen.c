#include "main.h"

/**
 *_strlen - function that
 *outputs the lenght of a string
 *@s: required string
 *Return: 0 (lenght of string)
 */
int _strlen(char *s)
{
int i;
int j = 0;

for (i = 0; s[i] != '\0'; i++)
	j++;
return (j);
}
