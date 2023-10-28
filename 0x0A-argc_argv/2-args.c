#include "main.h"

/**
 *main - a function that prints
 * all its arguments
 *@argc: count
 *@argv: vector
 *Return: name (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
	return (0);
}
