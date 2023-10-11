#include "main.h"
/**
*_islower - function that checks
* for lower cases.
* @c: character to check
* Return: 0 (lower), 1 (not lower)
*/
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
