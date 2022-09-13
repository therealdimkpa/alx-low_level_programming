#include <stdio.h>


/**
* print_sum - entry
* Return: 0
*/

int main(void)
{
int start = 1;

int max = 1024;

int sum = 0;

for (start = 1; start < max; start++)
	{
	if ((start % 3 == 0) || (start % 5 == 0))
		sum += start;
	}
printf("%d\n", sum);

return 0;
}
