#include "main.h"

/**
* puts2 -	prints a string
* @str:		string to be printed
* Return:	Nothing
*/

void puts2(char *str)
{
int len;
int i;

len = _strlen(str);

for (i = 0; i < len; i = i + 2)
	{
	_putchar(str[i]);
	}
_putchar('\n');
}
