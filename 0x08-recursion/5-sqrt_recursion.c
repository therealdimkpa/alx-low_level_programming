#include "main.h"

/**
* _sqrt -	Finds the square root of a number
* @n:		The number
* @x:		Buffer
* Return:	The square root of n
*/

int _sqrt(int n, int x)
{
	if (n == 1)
		return (1);

	else if (x == n || n < 0)
		return (-1);

	else if (x * x == n)
		return (x);

	else
		return (_sqrt(n, x + 1));
}

/**
* _sqrt_recursion -	Finds the square root of any given integer
* @n:				The given integer
* Return:			Returns the square root of @n
*					Return -1 if @n has no natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
