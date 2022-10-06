#include "main.h"

#include <stdlib.h>
#include <string.h>

/**
* string_nconcat -	Adds specific number of bytes of one string to another
* @s1:				The first string
* @s2:				The string to be added to @s1
* @n:				Number of bytes of @s2 to be added to @s1
* Return:			Pointer to memory containing s1 + s2
*					NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;
unsigned int len1, len2;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n > len2)
	n = len2;

new = malloc(sizeof(char) * (len1 + len2) +1);

if (!new)
	return (NULL);

else
	{
	strcpy(new, s1);
	strncat(new, s2, n);
	return (new);
	}
}
