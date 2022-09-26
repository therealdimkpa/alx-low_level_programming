#include "main.h"

/**
* *_memcpy -	Copies @n bytes from memory area @src to memory area @dest
* @dest:		Memory area to be edited
* @src:			Holds memory value to be filled into @dest
* @n:			Number of bytes to be copied from @src to @dest
* Return:		Returns manipulated @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;

for (i = 0; i < n; i++)
	dest[i] = src[i];

return (dest);
}
