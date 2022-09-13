#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char item;

	for (item = 'a'; item <= 'z'; item++)
		_putchar(item);
	_putchar('\n');
}
