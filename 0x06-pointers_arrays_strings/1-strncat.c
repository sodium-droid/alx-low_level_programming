#include "main.h"
/**
 *_strncpy - A function that concats
 *two strings based on size of n
 *@dest: string destination
 *@src: string source
 *@n: required bytes (number)
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, destlen = _strlen(dest);

for (i = 0; i < n && *src != '\0'; i++)
{
dest[destlen + i] = *src;
src++;
}
dest[destlen + i] = '\0';
return (dest);
}
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
