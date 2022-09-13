#include "main.h"

/**
 * print_to_98 - print number to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @number: input
*/

void print_to_98(int number)
{
int count;

if (number > 98)
	for (count = number; count > 98; --count)
		printf("%d, ", count);

else
	for (count = number; count < 98; ++count)

printf("%d, ", count);

printf("98\n");
}
