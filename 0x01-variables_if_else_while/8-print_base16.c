#include <stdio.h>

/**
* main - entry
*
* Return: 0 anything else indicates failure
*/

int main(void)
{
	char item;

	for (item = '0'; item <= '9'; item++)
		putchar(item);
	for (item = 'a'; item <= 'f'; item++)
		putchar(item);
	putchar('\n');
	return (0);
}
