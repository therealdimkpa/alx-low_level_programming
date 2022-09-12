#include <stdio.h>

/**
* main - entry
*
* Return: 0 if successful
*/

int main(void)
{
	int d1, d2, d3, d4 = 0;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = '0'; d2 <= '9'; d2++)
		{
			for (d3 = '0'; d3 <= '9'; d3++)
			{
			for (d4 = d2 + 1; d4 <= '9'; d4++)
				{
				putchar(d1);
				putchar(d2);
				putchar(' ');
				putchar(d3);
				putchar(d4);
				putchar(',');
				putchar(' ');
				}
			}
		}
	} putchar('\n');
	return (0);
}
