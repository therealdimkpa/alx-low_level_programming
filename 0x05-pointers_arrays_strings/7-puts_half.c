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
