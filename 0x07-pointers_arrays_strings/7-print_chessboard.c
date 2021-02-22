#include "holberton.h"
/**
 * print_chessboard - print in the terminal the chessboard
 * @a: The character to print
 *
 */
void	print_chessboard(char (*a)[8])
{
int	i = 0, j;

	while (i < 8)
	{
	j = 0;
	while (j < 8)
	_putchar(a[i][j++]);
	_putchar('\n');
	i++;
	}
}
