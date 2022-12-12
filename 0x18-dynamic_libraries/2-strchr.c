#include "main.h"

#include <string.h>

/**
* *_strchr -	Finds the pointer to the first location of
*				a character in a a string.
* @s:			The string to be searched
* @c:			Character that is being searched for in @s
* Return:		Returns pointer to first instance of c
*/

char *_strchr(char *s, char c)
{
int i;
int n;

i = strlen(s);
n = 0;

while (n < i)
	{
	if (s[n] == c)
		{
		return (&s[n]);
		}
	n++;
	}

return (NULL);
}
