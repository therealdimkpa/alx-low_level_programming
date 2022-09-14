#include <stdio.h>

/**
* main - entry
* Return: 0
*/

int main(void)
{
/* the first member of the fibonacci sequence */
long int val1 = 1;

/* the second member of the fibonacci sequence */
long int val2 = 2;

/* stores the new most recent fibonacci member */
int lastvalue = 0;

/* the maximum permissible fibonacci value */
int max_value = 4000000;

/* stors the sum of all even fibonacci numbers */
int sum_of_even = 2;

while (val2 < max_value)
	{
	lastvalue = val1 + val2;
	val1 = val2;
	val2 = lastvalue;

	if ((val2 % 2 == 0) && (val2 < max_value))
		sum_of_even += val2;
	}

printf("%i\n", sum_of_even);

return (0);
}
