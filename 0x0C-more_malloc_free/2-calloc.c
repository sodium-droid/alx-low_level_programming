#include "main.h"

/**
 *_calloc -allocates memory for
 *a string
 *@nmemb: members of the string
 *@size: size of each member.
 *Return: pointer to memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		nmemb = 0;
	}

return (str);
}
