#include "main.h"

/**
* main - entry
* Return: Always 0
*/

int main(void)
{
int j;

j = 612852475143;

int prime;
int isprime = 1;

printf("testing %i\n", j);

int i;

for (i = 1231951; i > 0; i--)
	{
	if (1231952 % i == 0)
		{
		printf("Found a factor of %i (%i)\n", j, i);
		
		int test;

		for (test = 3; test < i; test+2)
			{
			printf("Checking if %i is prime", i); 
			if (i % test == 0)
				{
				isprime = 0;
				prime = i;
				}
		break;
			}
		}
	if (isprime == 0)
		break;
	}
}
