#include "main.h"

/**
* print_most_numbers	-	Entry
*/

void print_most_numbers(void)
	{
	int item;

	for (item = 0; item <= 9; item++)
		{
		if (item == 2 || item == 4)
			continue;
		else
			printf("%i", item);
		}
	printf("\n");
	}
