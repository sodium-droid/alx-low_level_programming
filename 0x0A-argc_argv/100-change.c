#include "main.h"
#include <stdlib.h>

/**
 *main - function that checks for change
 *@argc: count
 *@argv: vector
 *Return: 1 or 0 or Error
 */

int main(int argc, char *argv[])
{
	int cents;
	int i, numCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	cents = atoi(argv[1]);

if (cents < 0)
{
	printf("0\n");
	return (0);
}

for (i = 0; i < 5; i++)
{
	while (cents >= coins[i])
{
	cents -= coins[i];
	numCoins++;
}
}

printf("%d\n", numCoins);
return (0);
}
