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
void *store = ptr;

if (new_size == 0 && ptr != NULL)
	return (NULL);
else
	{
	if (new_size == old_size)
		return (ptr);

	else
		{
		free(ptr);
		ptr = malloc(new_size);

		if (!ptr)
			return (NULL);

		else
			{
			ptr = malloc(new_size);
			ptr = store;
			return (ptr);
			}
		}
	}
}
