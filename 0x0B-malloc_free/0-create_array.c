#include "main.h"
#include <stdlib.h>

/**
* create_array - 	Creates an initializes an array of specific
* @size:			This is the size of the array
* @c:				This is the char it should be filled with
*
* Return:			Null if size of arrat is 0
*					Pointer to the first element of the array
*/

char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *a;

	if (size == 0)
		return (NULL);

	else
		{
		a = malloc(sizeof(c) * size);

		if (a == NULL)
			return (NULL);

		else
			{
			for (i = 0; i < size; i++)
				{
				a[i] = c;
				}
			return (a); 
			}
		}
}
