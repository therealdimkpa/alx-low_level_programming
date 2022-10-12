#include "function_pointers.h"

/**
* int_index -	A function that searches for an integer
* @array:		An integer array of size size.
* @size:		The size of the array.
* @cmp:			This is the compare function to be used
* Return:		-1 on error
*				-1 if the search does not find any match
*				The index of the element that is non-zero
*/

int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);
else
	{
	int i = 0;

	for (; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}
	}

return (-1);
}
