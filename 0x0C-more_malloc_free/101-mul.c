#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

#define true 1
#define false 0

/**
* areint -	Checks if a character is an integer
* @str:		The string containing the characters to be tested
* Return:	true if all characters are integers
*			false if any charcater is not an integer
*/

int areint(char *str)
{
int i;
int len;

len = strlen(str);

for (i = 0; i < len; i++)
	{
	if (str[i] < '0' || str[i] > '9')
		return (false);
	}

return (true);
}

/**
* allargsareint -	checks if all the arguments passed to the program are int
* @count:			Number of arguments passed to the program
* @str:				All the arguments passed to the program
* Return:			true if all the arguments are integers
*					false if any argument is not an integer
*/

int allargsareint(int count, char **str)
{
int i;
char *string;

for (i = 1; i < count; i++)
	{
	string = str[i];

	if (areint(string) != true)
		return (false);
	}

return (true);
}

/**
* main -	Multiplies two integers
* @argc:	Number of arguments passed
* @argv:	Integers to be multiplied
* Return:	98 if number of arguments is incorrect
*			98 if all the inputs aren't integers
*			0 on successful execution
*/

int main(int argc, char **argv)
{
if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

else if (allargsareint(argc, argv) == false)
	{
	printf("Error\n");
	return (98);
	}

else
	{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%i\n", result);
	return (0);
	}
}
