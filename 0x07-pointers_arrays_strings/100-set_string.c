#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer to char
 * @to: a pointer to char whose value you want to set to *s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
