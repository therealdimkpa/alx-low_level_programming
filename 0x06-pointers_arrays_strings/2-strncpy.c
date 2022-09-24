#include "main.h"
#include <string.h>

/**
* *_strncpy -	Copies one string into another
* @dest:		Char parameter
* @src:			Char parameter
* @n :			Int parameter
* Return:		Dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && n > 0)
	{
	dest[i] = src[i];
	i++;
	n--;
	}

return (dest);
}
