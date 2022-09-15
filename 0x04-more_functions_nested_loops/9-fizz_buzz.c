#include "main.h"

/**
* fizz_buzz -	Prints numbers 1 to 100 in a special way
*/

void fizz_buzz(void)
{
int n;

for (n = 1; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
		printf(" FizzBuzz");

	else if (n % 5 == 0)
		printf(" Buzz");

	else if (n % 3 == 0)
		printf(" Fizz");

	else
		printf(" %i", n);
	}
printf("\n");
}
