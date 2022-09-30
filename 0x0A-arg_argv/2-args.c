#include "main.h"

/**
* main -	Prints all the arguments received
* @argc:	Number of arguments passed to the program
* @argv:	Array of pointers to the arguments passed to the program
* Return:	Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}

	return (0);
}
