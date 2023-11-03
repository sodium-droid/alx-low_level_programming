#include "main.h"
/**
 *string_nconcat - returns a pointer
 *to memory for concated strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes to copy in "S2"
 *Return: pointer to newstr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len, k, l;
unsigned int i = 0, j = 0;
char *newstr;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}
len = i + j;
if (n < j)
{
	len = i + n;
	j = n;
}
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
