#include "main.h"

/**
* _strlen -	Gets the length of a string
* @s:		string
* Return:	length of string
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

/**
* print_rev -	Prints inputed characters in reverse
* @s:			Character input
* Return:		Returns nothing
*/

void print_rev(char *s)
{
int len;

len = _strlen(s);

len--;

while (len > 0)
	{
	_putchar(s[len]);
	len--;
	}
_putchar('\n');
}
