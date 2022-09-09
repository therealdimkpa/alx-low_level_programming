#include <stdio.h>


/**
* main - entry
*
* Return: 0 always
*/

int main(void)
{
	char set1;

	char set2;

	for (set1 = 'a'; set1 <= 'z'; set1++)
		putchar(set1);
	for (set2 = 'A'; set2 <= 'Z'; set2++)
		putchar(set2);
	putchar('\n');
	return (0);
}
