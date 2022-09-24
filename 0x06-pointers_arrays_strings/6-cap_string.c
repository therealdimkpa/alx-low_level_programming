include "main.h"
#include <string.h>
/**
*cap_string -	Capitalizes first char after punctuation
*@s:			String to be worked on
*Return:		Capitalized string
*/

char *cap_string(char *s)
{

char *ptr = s;
int i, j = strlen(s);

for (i = 0; i < j; i++)
	{
	if (s[i] >= 97 && s[i] <= 122)
		{
		if (s[i - 1] == ',' || s[i - 1] == ';' ||  s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
			s[i - 1] == '\t' || s[i - 1] == '\n' ||
			s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' ')
			{
			s[i] = (s[i] - 32);
			}
		}
	}

return (ptr);
}

