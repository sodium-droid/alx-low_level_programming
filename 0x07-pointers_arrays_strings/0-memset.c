#include "main.h"
/**
 *_memset - Function that fills
 *memory with a constant byte.
 *@s: pointer to memory to be filled.
 *@b: character to fill in "s".
 *@n: number of bytes to be filled.
 *Return: s (pointer to memory)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;

i++;
}
return (s);
}
