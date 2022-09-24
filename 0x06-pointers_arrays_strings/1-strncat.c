#include "main.h"
#include <string.h>

/**
* *_strncat -	Function
* @dest:		String to be added to
* @src:			String to be added
* @n:			Number of chars from @src to be added to @dest
* Return:		Dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int len;

len = 0;
i = 0;

while (dest[len] != '\0')
	{
	len++;
	}

while (src[i] != '\0' && n > 0)
	{
	dest[len] = src[i];
	len++;
	i++;
	n--;
	}

return (dest);
}

