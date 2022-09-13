#include <stdio.h>
#include "main.h"

/**
* main - entry
*
* Return: 0 if successful
*/

int main(void)
{
char str[] = "_putchar";

for (int item = 0; item < 8; item++)
	_putchar(str[item]);
_putchar('\n');

return (0);
}
