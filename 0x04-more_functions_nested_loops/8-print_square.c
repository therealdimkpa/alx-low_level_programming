#include "main.h"

/**
* print_square -	Prints a square of '#'
* @size:			The length of each side square to be printed
*/

void print_square(int size)
{
int length = size;

int width = size;

if (size <= 0)
	_putchar('\n');
else
	{
	while (length > 0)
		{
		width = size;

		while (width > 0)
			{
			_putchar('#');
			width--;
			}
		length--;
		_putchar('\n');
		}
	}
}
