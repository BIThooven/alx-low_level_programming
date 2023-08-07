#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function mean to free the 2D array
 * @grid: the 2D array to be freed
 * @height: the argument of height
 * Return: void does not return anything
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
