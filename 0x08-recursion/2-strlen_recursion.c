#include "main.h"

/**
* _strlen_recursion -	Calculates the length of a string
* @s:					String whose length is to be calculated
* Return:				Returns the length of the string
*/

int _strlen_recursion(char *s)
{
if (s[0] == '\0')
	{
	return (0);
	}

return (1 + _strlen_recursion(&s[1]));
}
