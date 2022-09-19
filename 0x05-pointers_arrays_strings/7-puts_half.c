#include "main.h"

/**
* puts_half -	Prints half of a string
* @str:			String to be printed
* Return:		Returns nothing
*/

void puts_half(char *str)
{
int length;
int len;
int i;

length = _strlen(str);
len = _strlen(str);
len = len / 2;

for (i = len; i < length; i++)
	{
	_putchar(str[i]);
	}
_putchar('\n');
}
