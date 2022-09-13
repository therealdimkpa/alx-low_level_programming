#include "main.h"

/**
* jack_bauer - entry
*/

void jack_bauer(void)
{
char n1, n2, n3, n4 = 0;

int loop = 0;

for (n1 = '0'; n1 < '3'; n1++)
	{
	for (n2 = '0'; n2 < '9', loop < 14; n2++)
		{
		for (n3 = '0'; n3 < '6'; n3++)
			{
			for (n4 = '0'; n4 <= '9'; n4++)
				{
				_putchar(n1);
				_putchar(n2);
				_putchar(':');
				_putchar(n3);
				_putchar(n4);
				_putchar('\n');
				}
			}
		loop++;
		}
	}
}
