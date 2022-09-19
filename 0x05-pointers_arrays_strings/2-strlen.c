#include "main.h"

/**
* _strlen -	Calculates the length of a string input
* @s:		The string to be analyse
* Return:	Returns the length of the string
*/

int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
	{
	length++;
	}

return (length);
}
