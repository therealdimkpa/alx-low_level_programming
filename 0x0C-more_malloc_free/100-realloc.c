#include "main.h"

/**
* _realloc -	Reallocates the memory of a pointer
* @ptr:			The pointer
* @old_size:		Old size of the pointer
* @new_size:		Required new memory area of the pointer
* Return:		NULL if newsize = 0 and pointer is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

if (new_size == 0 && ptr != NULL)
	return (NULL);
else
	{
	if (new_size == old_size)
		return (ptr);

	else
		{
		ptr = malloc(new_size);

		if (!ptr)
			return (NULL);

		else
			{
			return (ptr);
			}
		}
	}
}
