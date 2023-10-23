#include "main.h"
/**
 *_strchr - Function that locates
 *a character in a string.
 *@s: pointer to memory to be check.
 *@c: character to return from "s".
 *Return: s (pointer to memory)
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
i++;
}
return (NULL);
}
