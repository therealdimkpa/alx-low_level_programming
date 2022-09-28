#include "main.h"

/**
* _pow_recursion -	Multiplies a number a certain number of times
* @x:				Number to be multiplied
* @y:				Number of times x should be multiplied
* Return:			Returns x raised to the power of y or -1 if y is negative
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);

else if (y == 0)
	return (1);

else if (y == 1)
	return (x);

else
	return (x * _pow_recursion(x, y - 1));
}
