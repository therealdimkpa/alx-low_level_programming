#include "main.h"

/**
* main -	Prints numbers 1 to 100 in a special way
* Return:	Alwasys 0
*/

int main(void)
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

	else if (n == 1)
		printf("%i", n);
	else
		printf(" %i", n);
	}

printf("\n");
return (0);
}
