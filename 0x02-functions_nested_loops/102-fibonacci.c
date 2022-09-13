#include <stdio.h>


/**
* main - entry
* Return: 0 = success
*/

int main(void)
{
long int val1 = 1;

long int val2 = 2;

int count = 0;

printf("%li, ", val1);
printf("%li, ", val2);

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
