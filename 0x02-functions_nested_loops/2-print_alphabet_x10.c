#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10x
*
* Return: Returns nothing
*/

void print_alphabet_x10(void)
{
char item;
int loop = 0;

while (loop < 10)
	{
	for (item = 'a'; item < 'z'; item++)
		_putchar(item);
	if (loop != 9)
		_putchar('\n');
	loop++;
	}
}
