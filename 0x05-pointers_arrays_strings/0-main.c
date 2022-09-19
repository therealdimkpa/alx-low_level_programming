#include "main.h"

/**
* main -	Tests the function for project reset to 98
* Return:	Always zero (0);
*/

int main(void)
{
int i;

i = 402;

printf("The value of i is: %i\n", i);

reset_to_98(&i);
printf("The value of i is: %i\n", i);

return (0);
}
