#include "main.h"

/**
* _calloc -	Allocates memory for an array
* @nmemb:	Number of elements of the array
* @size:	Number of byte each element of the array requires
*
* Return:	Pointer to the allocated memory if execution is successful
*			NULL if nmemb or size is 0
*			NULL if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

else
	{
	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);
	else
		return (ptr);
	}
}
