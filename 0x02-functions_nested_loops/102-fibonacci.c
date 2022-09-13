#include <stdio.h>

/**
* main - entry
* Return: 0 = success
*/

int main(void)
{
int lastvalue = 1;

int count = 0;

while (count < 50)
	{
	printf("%i, ", lastvalue);
	lastvalue += lastvalue;
	count++;
	}

return (0);
}
