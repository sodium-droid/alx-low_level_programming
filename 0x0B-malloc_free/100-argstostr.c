#include "main.h"

/**
 *argstostr - prints all
 *arguments of an executable
 *@ac: count of arguments
 *@av: argument vectors
 *Return: str (string of vectors)
 */

char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, size = 0;

k = 0;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
		size++;
}

str = malloc((size + ac) * sizeof(char));
if (str == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
{
		str[k] = av[i][j];
		k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
