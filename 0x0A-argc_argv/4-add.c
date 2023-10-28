#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *main - a function that prints
 * the sum of arguments (numbers)
 *@argc: count
 *@argv: vector
 *Return: name (0)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *each;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
each = argv[i];

	for (j = 0; j < strlen(each); j++)
{
		if(each[j] < 48 || each[j] > 57)
{
		printf("Error\n");
		return (1);
}
}
sum += atoi(each);
each++;
}

printf("%d\n", sum);
}

else
{
	printf("0\n");
}
	return (0);
}
