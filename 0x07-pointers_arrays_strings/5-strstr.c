#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 * Return: a pointer to the beginning of the located
 * substring in 'haystack' or NULL if 'needle' is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
{
	char *start = haystack;

	while (*haystack == *needle && *needle != '\0')
{
	haystack++;
	needle++;
}
	if (*needle == '\0')
{
	return (start);
}
	needle = needle - (haystack - start);
	haystack = start + 1;
}
	return (NULL);
}
