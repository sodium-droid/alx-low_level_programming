#include <stdio.h>
#include <unistd.h>
/**
 *main - A c program that
 *prints to standard error (stderr)
 *Return 1 (Error)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
}
