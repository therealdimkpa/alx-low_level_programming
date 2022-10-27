#include "main.h"

/**
* clear_bit -	Sets the bits at a specified index as 0
* @n:			Source of the integer
* @index:		The location of the bit to be changed
* Return:		1 if the execution was successful
*				-1 in case of an error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8)
		return (-1);

	else
		{
		*n &= ~(1 << index);
		return (1);
		}
}
