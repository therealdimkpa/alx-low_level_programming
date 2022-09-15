#include "main.h"

/**
* print_diagonal -	Prints a diagonal line
* @n:				Defines how many diagonal lines to print
*/

void print_diagonal(int n)
{
if (n <= 0)
	_putchar('\n');
else
	{
	int count;

	for (count = 0; count < n; count++)
		{
		int laps = count;

		while (laps > 0)
			{
			_putchar(' ');
			laps--;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
