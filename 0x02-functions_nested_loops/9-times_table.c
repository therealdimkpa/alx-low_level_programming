#include "main.h"

/**
* times_table - entry
*/

void times_table(void)
{
int start = 0;
int stop = 0;

for (start = 0; start <= 9; start++)
	{
	for (stop = 0; stop <= 9; stop++)
		{
		int result = stop * start;
		printf("%i,..", result);
		}
	printf("\n");
	}
}
