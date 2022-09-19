#include "main.h"

/**
* main -	tests the function for swapping the values of two integers
* Return:	Always zero (0)
*/

int main(void)
{
int x01;
int x02;

x01 = 100;
x02 = 200;

printf("x01 = %i, x02 = %i\n", x01, x02);
swap_int(&x01, &x02);

printf("x01 = %i, x02 = %i\n", x01, x02);

return (0);
}
