#include "main.h"

/**
* _puts -	Writes a string to stdout
* @str:		The string to be written
* Return:	Nothing
*/

void _puts(char *str)
{
int length;

length = _strlen(str);

write(1, str, length);
_putchar('\n');
}
