#include "main.h"
#include <stdlib.h>
int mul(int i, int j);

/**
 *main - a function that prints
 *the product of 2 numbers
 *@argc: count
 *@argv: vector
 *Return: product (0) or "Error" (1)
 */

int main(int argc, char *argv[])
{
	int result, i = 1;

if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}
else
{
	result = mul(atoi(argv[i]), atoi(argv[i + 1]));
}
	printf("%d\n", result);
	return (0);
}
/**
 *mul - product of 2 numbers
 *@i: number 1
 *@j: number 2
 *Return: product
 */
int mul(int i, int j)
{
return (i * j);
}
