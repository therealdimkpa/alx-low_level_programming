#include <stdio.h>
/**
* main - entry point
*
* Return: 0 (successfull)
*/

int main(void)
{
	int d1, d2, d3, n = 0;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
	for (d2 = d1 + 1; d2 <= '9'; d2++)
	{
	for (d3 = d2 + 1; d3 <= '9'; d3++, n++)
	{
	if (n > 0)
	{
		putchar(',');
		putchar(' ');
	}

	putchar(d1);
	putchar(d2);
	putchar(d3);
	}
	}
	} putchar('\n');
return (0);
}
Footer

