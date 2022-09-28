#include "main.h"

/**
* factorial -	Finds the factorial of a given number
* @n:			The given number
* Return:		Returns the factorial of @n or -1 if @n is negative
*/

int factorial(int n)
{
if (n < 0)
	{
	return (-1);
	}

else if (n == 0)
	{
	return (1);
	}

else
	{
	return (n * factorial(n - 1));
	}
}
