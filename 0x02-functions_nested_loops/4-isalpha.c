#include "main.h"
/**
*_isalpha - function that checks
* for letters.
* @c: character to check
* Return: 0 (not letter), 1 (letter)
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
