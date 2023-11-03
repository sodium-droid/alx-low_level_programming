#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 *_realloc - changes the memory size
 *of a pointer previously allocated.
 *@ptr: pointer
 *@old_size: old size (bytes)
 *@new_size: new size (bytes)
 *Return: pointer to new_memory allocated.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int len;
void *array;

if (new_size == old_size)
	return (ptr);
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (ptr == NULL)
	return (malloc(new_size));
len = new_size;
if (new_size > old_size)
	len = old_size;
array = malloc(new_size);
if (array == NULL)
	return (NULL);
_memcpy(array, ptr, len);
free(ptr);
return (array);
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
	dest[i] = src[i];
return (dest);
}
