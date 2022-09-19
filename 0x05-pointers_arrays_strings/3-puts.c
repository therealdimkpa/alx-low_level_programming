#include "main.h"

/**
* _strlen -	Gets the length of a string
* @s:		string
* Return:	length of string
*
* _puts -	Writes a string to stdout
* @str:		The string to be written
* Return:	Nothing
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

void _puts(char *str)
{
int length;

length = _strlen(str);

write(1, str, length);
_putchar('\n');
}
