#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* _strcmp -	Function
* @s1:		Char parameter
* @s2:		Char parameter
* Return:	Int value
*/
int _strcmp(char *s1, char *s2)
{
int n, i;
int *value;

value = malloc(sizeof(int));

if (strlen(s1) < strlen(s2))
	n =  strlen(s2);
else
	n = strlen(s1);

for (i = 0; i < n; i++)
	{
	if (s1[i] != s2[i])
		{
		*value = (s1[i] - 48) - (s2[i] - 48);
		break;
		}
	}

return (*value);
}

