#include "main.h"

#define true 1
#define false 0

/**
* _atoi -	Converts a string to an integer
* @s:		String to be converted
* Return:	Returns the integer value
*/

int _atoi(char *s)
{
int start, stop, i, len, sign, len_of_int, the_int;

start = -1;
stop = 0;

len = strlen(s);
the_int = 0;

for (i = 0; i < len; i++)
	{
	if (_isnumber(s[i]) == true && start == -1)
		start = i;
	else if (_isnumber(s[i]) == true)
		stop = i;
	else if (start > 0 && _isnumber(s[i]) == false)
		break;

	else
		continue;
	}

if (stop == 0)
	return (0);

if (start == '0')
	sign = 1;
else if (s[start - 1] == '-')
	sign = -1;
else
	sign = 1;

len_of_int = stop - start + 1;
for (i = start; i <= stop; i++, len_of_int--)
	the_int += ((s[i] - '0') * _pow(10, len_of_int));

the_int /= 10;
the_int *= sign;

return (the_int);
}

/**
* _isnumber -	Checks if a character is a number
* @n:			The number
* Return:		1 if is number otherwise 0
*/

int _isnumber(char n)
{
if (n >= '0' && n <= '9')
	{
	return (true);
	}
return (false);
}

/**
* _pow -	Gets the exponent of a number
* @a:		The number to be raised to power
* @b:		The number of times it should be raised to power
* Return:	a ^ b
*/

int _pow(int a, int b)
{
int result;

result = a;

while (b > 1)
	{
	result *= a;
	b--;
	}

return (result);
}
