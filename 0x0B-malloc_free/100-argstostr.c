#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr -	Concatenates all the string of arguments
 * @ac:			This is argument count
 * @av:			This is argument vector
 * Return: A new string if successful, Null if otherwise
 */

char *argstostr(int ac, char **av)
{
	int count = 0, number = 0, i;
	char *s;
	unsigned int j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
		number++;
		}
	}

	s = malloc(sizeof(char) * (number + ac - 1));

	for (i = 0; i < ac; i++)
		{
		for (j = 0; j < strlen(av[i]); j++)
			{
			s[count] = av[i][j];
			count++;
			}
		s[count] = '\n';
		count++;
		}
		s[count] = '\0';

return (s);
}

