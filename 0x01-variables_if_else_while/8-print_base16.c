#include <stdio.h>

/**
* main - entry
*
* Return: 0 anything else indicates failure
*/

int main(void)
{
	for (char item = '0'; item <= '9'; item++)
		putchar(item);
	for (char item = 'a'; item <= 'f'; item++)
		putchar(item);
	putchar('\n');
	return (0);
}
