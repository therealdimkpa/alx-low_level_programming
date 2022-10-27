#include "main.h"

/**
* get_endianness -	What its name implies
* Return:			1 if little endian
*					0 if big endian
*/

int get_endianness(void)
{
	int i =1;
	char *end = (char *) &i;

	return (*end == 1);
}
