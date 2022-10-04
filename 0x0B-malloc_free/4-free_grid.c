#include "main.h"
#include <stdlib.h>

/**
 * free_grid -	This frees the allocated memory of an array
 * @grid:		This is the array to be freed
 * @height:		This is the size of the pointer space
 * Return:		Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		{
		free(grid[i]);
		}
}

