#include <stdio.h>
#include <stdlib.h>

/**
* main -	Prints its own opcodes
* @argc:	Number of arguments
* @argv:	Array of arguments
* Return:	Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *) main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", arr[i] &  0xFF);
		if (i != bytes - 1)
			printf(" ");
	}
printf("\n");
return (0);
}

