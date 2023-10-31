#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 *_strdup - function that
 *returns a pointer to the copy
 *of a string in memory
 *@str: pointer to the string
 *Return: pointer to "str"
 */
char *_strdup(char *str)
{
int i, j = 1;
char *newstr;

for (i = 0; str[i] != '\0'; i++)
{
	j++;
}
newstr = malloc(sizeof(*str) * j);
if (newstr == NULL || str == NULL)
	return (NULL);
return (_memcpy(newstr, str, (j - 1)));
}
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 * Return: a pointer to the destination memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
