#include <stdio.h>

/**
* main - entry
* Return: 0 = success
*/

int main(void)
{
int val1 = 1;
int val2 = 2;

int count = 0;

while (count < 50)
	{
	int lastvalue = val1 + val2;
	
	printf("%i, ", lastvalue);
	val1 = val2;
	val2 = lastvalue;
	count++;
	}

return (0);
}
