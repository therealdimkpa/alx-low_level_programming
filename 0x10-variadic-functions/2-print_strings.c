#include "variadic_functions.h"

/**
* print_strings -	Prints a sting followed by a separator
* @separator:		This is the string to separate the numbers
* @n:				This is the number of arguments
* Return:			Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *store;

	int *arr = malloc(sizeof(int) * n);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		store = va_arg(ap, char *);

		if (store == NULL)
			printf("(nil)");
		else
			printf("%s", store);

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
