#include "variadic_functions.h"

/**
* sum_them_all -	Sums all numbers passed to the function
* @n:				Number of arguments to be passed
* Return:			0 if n = 0
*					Sum of the first n arguments
*/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
	return (0);
else
	{
	int sum = 0;
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		{
		sum += va_arg(ap, int);
		}

	va_end(ap);
	return (sum);
	}
}
