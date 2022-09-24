#include "main.h"
#include <string.h>
/**
* leet -	Function
* @s:		Char parameter
* Return:	Char value
*/
char *leet(char *s)
{
char cap[5] = {'A', 'E', 'O', 'T', 'L'};
char sml[5] = {'a', 'e', 'o', 't', 'l'};
char nums[5] = {'4', '3', '0', '7', '1'};
int i, j, n = strlen(s);

for (i = 0; i < n; i++)
	{
	for (j = 0; j < 5; j++)
		{
		if (s[i] == cap[j] || s[i] == sml[j])
			s[i] = nums[j];
		}
	}

return (s);
}
