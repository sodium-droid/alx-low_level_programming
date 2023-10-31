#include "main.h"

/**
 *str_concat - returns a pointer
 *to memory for concated strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to newstr.
 */

char *str_concat(char *s1, char *s2)
{
int len, k, l;
int i = 0, j = 0;
char *newstr;

if (s1 == NULL)
	return ("");

if (s2 == NULL)
	return ("");

while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}

len = i + j;
newstr = malloc(sizeof(char) * (len + 1));

if (newstr == NULL)
	return (NULL);
for (k = 0; k < i; k++)
{
newstr[k] = s1[k];
}
for (l = 0; l < j; l++, k++)
{
newstr[k] = s2[l];
}
newstr[k] = '\0';
return (newstr);
}
