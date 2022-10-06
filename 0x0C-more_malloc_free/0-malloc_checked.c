#include "main.h"

/**
* malloc_checked -	Allocates specified memory size
* @b:				Amount of memore to be allocated
*
* Return:			Pointer to the allocated memory
*					Exits with status value 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr =  malloc(b);

if (!ptr)
	exit(98);

else
	return (ptr);
}
