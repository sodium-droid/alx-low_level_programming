#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: least integer
 *@max: greatest integer
 *Return: pointer to memory (min)
 */

int *array_range(int min, int max)
{
int i, len;
int *ptr;

if (min > max)
	return (NULL);

len = max - min + 1;

ptr = malloc(sizeof(min) * len);
if (ptr == NULL)
	return (NULL);

for (i = 0; i < len; i++)
	ptr[i] = min + i;

return (ptr);
}
