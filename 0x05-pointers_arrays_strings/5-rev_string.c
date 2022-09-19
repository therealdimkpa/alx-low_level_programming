#include "main.h"




/**
* rev_string -	Reverses the strings stored in an array
* @s:			String to be reversed
* Return:		Returns nothing
*/

void rev_string(char *s)
{
int len;
int len2;
char copy2[100];
char store;

len2 = _strlen(s);

for (len = 0; len < len2; len++)
	{
	copy2[len] = s[len];
	}

printf("what is stored in copy: %s\n", copy2);

for (len = len2; len > 0; len--)
	{
	store = copy2[len2 - len];
	printf("store: %c\n", store);

	s[len] = store;
	printf("The new s: %s\n", s);
	}
printf("The new s: %s\n", s);
}
