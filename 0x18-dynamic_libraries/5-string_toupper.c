#include "main.h"
#include <string.h>

/**
*string_toupper -	Function
*@s:				String to be converted to uppercase
*Return:			Uppercased string
*/

char *string_toupper(char *s)
{
char *ptr = s;
int i, j = strlen(s);

for (i = 0; i < j; i++)
	{
	if (s[i] >= 97 && s[i] <= 122)
		s[i] = (s[i] - 32);
	}

return (ptr);
}
