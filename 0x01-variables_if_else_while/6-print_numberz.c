#include <stdio.h>


/**
* main - entry
*
* Return: 0 if successful
*/

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
