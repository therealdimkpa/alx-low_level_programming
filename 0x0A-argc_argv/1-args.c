#include "main.h"

/**
* main -	Prints number of args passed to the program
* @argc:	Number of arguments passed to the program
* @argv:	Array of pointers to the arguments
* Return:	Always 0
*/

int main(int argc, char *argv[])
{
	char c = *argv[0];

	if (c == *argv[0])
		c = *argv[0];

	printf("%i\n", argc);
	return (0);
}
