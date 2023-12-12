#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 *
 */

int is_palindrom_test(char *s, int i)
	{
	int shift = strlen(s) - 1;

	if (s[i] != s[shift - i])
		{
		return (0);
		}
	else
		{
		is_palindrom_test(s, i+1);
		}
	if (i = shift + 1)
		{
		return (1);
		}
	return (0);
	}

int is_palindrome(char *s)
{
	return(is_palindrom_test(s, 0));
}
