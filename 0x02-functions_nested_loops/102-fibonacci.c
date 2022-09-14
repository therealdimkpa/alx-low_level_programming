#include <stdio.h>


/**
* main - entry
* Return: 0 = success
*/

int main(void)
{
long int val1 = 1;

long int val2 = 2;

int count = 50;

int item;

printf("%li, %li, ", val1);

for (item = 3; item < count; item++)
	{
	int lastvalue = val1 + val2;

	printf("%i, ", lastvalue);
	val1 = val2;
	val2 = lastvalue;
	}

return (0);
}
