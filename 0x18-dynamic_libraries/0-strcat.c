#include "main.h"

/**
* *_strcat -Function
* @dest:	String which will be appended to
* @src:		String to be added to @dest
* Return:	Returns char value of @dest
*/

char *_strcat(char *dest, char *src)
{
	int len;
	int i;
	int lensrc;

	len = strlen(dest);
	lensrc = strlen(src);

	for (i = 0; i < lensrc; i++)
		{
		dest[len] = src[i];
		len++;
		}

	return (dest);
}
