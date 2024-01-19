#include "main.h"
/**
 *_strncat - A function that concats
 *two strings based on size of n
 *@dest: string destination
 *@src: string source
 *@n: required bytes (number)
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
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
