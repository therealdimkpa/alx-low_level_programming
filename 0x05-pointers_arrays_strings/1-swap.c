#include "main.h"

/**
* swap_int -	swaps the values stored by two integers
* @a:			Pointer to the first integer
* @b:			Pointer to the second integer
* Return:		Returns nothing
*/

void swap_int(int *a, int *b)
{
int store;

store = *a;

*a = *b;
*b = store;
}
