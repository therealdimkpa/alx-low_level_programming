#include "main.h"

/**
* print_array -	prints a specific number of members of an array
* @a:			Parent array
* @n:			Number of members to print
* Return:		Nothing
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
	{
	if (i == (n - 1))
		printf("%i\n", a[i]);
	else
		printf("%i, ", a[i]);
	}
}
