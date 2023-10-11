#include "main.h"
/**
* print_last_digit - function that prints
* the last digit of a number.
* @n: number to check
* Return: a
*/

int print_last_digit(int n)
{
int a = n % 10;

return (a < 0 ? -a : a);
}
