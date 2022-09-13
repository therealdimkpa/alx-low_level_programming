#include "main.h"

/**
* _abs - gets the absolute value of an input
*
* @number: integer input
*
* Return: absolute value of @n
*/

int _abs(int number)
{
if (number < 0)
	return (number * -1);
else
	return (number);
}
