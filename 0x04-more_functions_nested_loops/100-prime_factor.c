#include <stdio.h>

/**
* main - entry point
* Return: 0 (successful)
*/

int main(void)
{
	long int n = 612852475143;

	int i;

	int x = n / 3;

	int prime = 3;

	for (i = 10; i <= x; i++)
	{
		if ((n % i == 0) &&  i > prime)
		{
		prime = i;
		}
	}
printf("%d", prime);
return (0);
}
