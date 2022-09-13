#include "main.h"

/**
* _islower - entry
*
* @c: the variable that is being compared;
*
* Return: 1 if @c is lower, 0 otherwise
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (0);
else
	return (1);
}
