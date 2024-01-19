#include "main.h"
/**
 *_strcat - A funtion that
 *concats 2 strings
 *@dest: string 1
 *@src: string 2
 *Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int i, lena = _strlen(src), lenb = _strlen(dest);

for (i = 0; i <= lena; i++)
{
	dest[lenb + i] = src[i];
}
return (dest);
}
