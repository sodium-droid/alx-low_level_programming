#include "main.h"

/**
 *main - a function that prints
 *count of arguments
 *@argc: count
 *@argv: vector
 *Return: name (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
