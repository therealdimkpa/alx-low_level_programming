#include "main.h"

/**
* _isalpha - entry
*
* @c: character to be tested
*
* Return: 1 is character is alphabet, 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 'a' && <= 'z') || (c >= 'A' && <= 'Z'))
	return (1);
else
	return (0);
}
