#include "main.h"
/**
 *_strcpy - A function that
 *copies the string pointed to by
 *src to dest.
 @src: pointer
 *@dest: destination
 *Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
src[i] = '\0';
return (dest);
}
