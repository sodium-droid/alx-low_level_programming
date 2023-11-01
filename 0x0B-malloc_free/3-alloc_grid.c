#include "main.h"

/**
 *alloc_grid - function that returns
 *a pointer to a 2D in memory
 *@width: columns
 *@height: rows
 *Return: 2D array
 */

int **alloc_grid(int width, int height)
{
int **array;
int i, j;

if (width <= 0 || height <= 0)
	return (NULL);

array = (int **) malloc(height * sizeof(int *));
if (array == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	array[i] = (int *) malloc(width * sizeof(int));
	if (array[i] == NULL)
{
	for (; i >= 0; i--)
{
		free(array[i]);
}

	free(array);
	return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
		array[i][j] = 0;

}
return (array);
}
