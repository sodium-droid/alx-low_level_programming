#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing acceptable characters
 * Return: the number of bytes in the initial
 * segment of 's' consisting of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found = 1;

while (*s != '\0')
{
found = 0;
for (i = 0; accept[i] != '\0'; i++)
{
	if (*s == accept[i])
{
	found = 1;
	break;
}
}
	if (found)
{
	count++;
}
	else
{
	break;
}
	s++;
}
	return (count);
}
