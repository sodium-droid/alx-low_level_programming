#ifndef VARARG_FUNC_H
#define VARARG_FUNC_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
