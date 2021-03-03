#include "holberton.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: two dimensional grid
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == '\0' || height <= 0)
	{
		return;
	}

	for (a = height - 1; a >= 0 ; a--)
	{
		free(grid[a]);
	}
	free(grid);
}
