#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat -	Adds two string together
* @s1:			The first string
* @s2:			The string to be added to s1
* Return:		Pointer to a string where the two are combined
*				NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int size_s1, size_s2, i, j;
	char *concat;

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);

	if (size_s1 == 0 && size_s2 == 0)
		return (NULL);

	else
		{
		concat = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
		if (!concat)
			return (NULL);

		else
			{
			if (size_s1 > 0)
				{
				i = 0;
				while (s1[i] != '\0')
					{
					concat[i] = s1[i];
					i++;
					}
				}
			if (size_s2 > 0)
				{
				j = 0;
				while (s2[j] != '\0')
					{
					concat[i + j] = s2[j];
					j++;
					}
				}
			return (concat);
			}
		}
}
