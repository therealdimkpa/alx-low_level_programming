#include "main.h"

/**
* rPow -    Raises a number to a specified power
* @a:       Number to be raised to power
* @b:       Power a should be raised to
* Return:   a ** b
*/

unsigned int rPow(int a, unsigned int b)
	{
	unsigned int i;
	unsigned int v = 1;

	for (i = 0; i < b; i++)
		v *= a;
	return (v);
	}

/**
* binary_to_uint -	Converts a string of binary numbers to unsigned int
* @b:				Pointer to the string
* Return:			The converted number
*					0 if one or more characters in the string is
*						not 0 or 1
*					0 if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int error = 0, rValue = 0;

	if (b == NULL)
		return (error);

	else
		{
		unsigned int loop, len = strlen(b);

		len--;
		for (loop = 0; loop <= len; loop++)
			{
			char c = b[loop];

			if (c != '0' && c != '1')
				return (error);

			else
				{
				rValue += (((unsigned int)c - 48) * rPow(2, (len - loop)));
				}
			}
		return (rValue);
		}
}
