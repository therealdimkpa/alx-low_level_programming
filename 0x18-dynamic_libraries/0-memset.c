#include "main.h"

/**
* *_memset -	Fills the first n bytes of memory with a constant character
* @s:			Pointer to the memory area to be filled
* @b:			The byte to be filled into s
* @n:			The number of bytes of @b to be filled in @s
* Return:		Pointer to the memory area of s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;

for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

return (s);
}
