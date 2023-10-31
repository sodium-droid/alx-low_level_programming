#include "main.h"
#include <stdlib.h>
/**
 *create_array - initializes a char
 *to an array it creates.
 *@size: size of the array
 *@c: char to initialize
 *Return: an array with "c" as elements.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);

for (i = 0; i < size; i++)
{
	array[i] = c;
}
	return (array);
}
