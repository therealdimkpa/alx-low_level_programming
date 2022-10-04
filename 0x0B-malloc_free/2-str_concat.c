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
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) == 0 && strlen(s2) == 0)
		return (NULL);

	else
		{
		concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
		if (!concat)
			return (NULL);

		else
			{
			if (strlen(s1) > 0)
				{
				i = 0;
				while (s1[i] != '\0')
					{
					concat[i] = s1[i];
					i++;
					}
				}
			if (strlen(s2) > 0)
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
