#include "main.h"

/**
* main -	Adds all numbers passed to the program as argument
* @argc:	Number of arguments passed to the program
* @argv:	Array of pointers to the arguments passed to the program
* Return:	0 if execution is successful
*			1 if one of the arguments is non-digit
*/

int main(int argc, char *argv[])
{
int sum = 0;
int loop = 0;

if (argc == 1)
	printf("%i\n", sum);

for (loop = 1; loop < argc; loop++)
	{
	if (*argv[loop] >= '0' && *argv[loop] <= '9')
		sum += atoi(argv[loop]);
	else
		{
		printf("Error\n");
		return (1);
		}
	}

printf("%i\n", sum);
return (0);
}
