#ifndef V_FUNC
#define V_FUNC

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* V_FUNC */
