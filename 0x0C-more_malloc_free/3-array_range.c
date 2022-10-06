#include "main.h"

/**
* array_range -	Creates an array of integers
* @min:			Starting digit of the integers
* @max:			Maximum value of integer to be in the array
* Return:		Pointer to the array of integers
*				NULL if min > max
*				NULL if malloc fails
*/

int *array_range(int min, int max)
{
int *ptr;

if (min > max)
	return (NULL);

else
	{
	int i;
	int range;

	range =  max - min + 1;
	ptr = malloc (sizeof(int) * range);

	for (i = 0; i < range; i++)
		{
		ptr[i] = (min + i);
		}
	return (ptr);
	}
}
