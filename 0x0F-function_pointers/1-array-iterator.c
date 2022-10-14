#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator -	Loops through an array
* @array:			Array containing functions
* @size:			The size of the array of functions
* @action:			Function initializer
* Return:			Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (size <= 0 || array == NULL || action == NULL)
	return;
else
	{
	size_t i = 0;

	for (; i < size; i++)
		action(array[i]);
	}
}
