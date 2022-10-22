#include "main.h"

#define true 1
#define false 0

/**
* _atoi -	Converts a string to an integer
* @s:		String to be converted
* Return:	Returns the integer value
*/

int _atoi (char *s)
{
int start;
int stop;
int i;
int len;
int sign;
int len_of_int;
int the_int;

start = 0;
stop = 0;

len = strlen(s);
the_int = 0;

for (i = 0; i < len; i++)
	{
	if (_isnumber(s[i]) == true && start == 0)
		{
		start = i;
		}
	if (_isnumber(s[i]) == true)
		{
		stop = i;
		}
	else if (start > 0 && _isnumber(s[i]) == false)
		{
		break;
		}
	else
		continue;
	}

if (start != 0 && stop == 0)
	stop = len - 1;

if (start == '0')
	sign = 1;

else if (s[start - 1] == '-')
	sign = -1;

else
	sign = 1;

len_of_int = stop - start + 1;

for (i = start; i <= stop; i++, len_of_int--)
	{
	the_int += ((s[i] - '0') * _pow(10, len_of_int));
	}

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
