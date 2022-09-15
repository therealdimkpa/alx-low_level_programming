#include "main.h"
#include <stdio.h>

/**
* _isupper	- tests whether a character is upper case or not
*
* @c:		The character to be tested
*
* Return:	0 if character is uppercase 1 otherwise
*
*/

int _isupper(int c)
{
	char item;

	for (item = 'A'; item <= 'Z'; item++)
		{
		if (c == item)
			return (1);
		}

return (0);
}
