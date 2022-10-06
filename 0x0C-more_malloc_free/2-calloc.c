#include "main.h"
#include <stdlib.h>

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
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
