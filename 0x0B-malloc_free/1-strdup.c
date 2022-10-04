#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup -	Creates a duplicate of a string
* @str:		The string to be duplicated
* Return:	NULL if string is NULL
*			Pointer to the duplicated string
*/

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	else
		{
		char *dup;
		int i;
		int lenstr;

		lenstr = strlen(str);
		dup = malloc(sizeof(char) * (lenstr));

		if (!dup)
			return (NULL);

		else
			{
			for (i = 0; i < lenstr; i++)
				{
				dup[i] = str[i];
				}
			return (dup);
			}
		}
}
