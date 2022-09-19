#include "main.h"

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
