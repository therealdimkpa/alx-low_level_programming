#include "main.h"
#include <stdlib.h>

/**
* main -	Multiplies two numbers
* @argc:	Number of arguments passed to the program
* @argv:	Array of pointers of arguments passed to the program
* Return:	0 if successful else, 1
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
		{
		printf("Error\n");
		return (1);
		}

	else
		{
		int a = atol(argv[1]);
		int b = atol(argv[2]);

		int c = a * b;

		printf("%i\n", c);
		return (0);
		}
}
