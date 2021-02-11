#include "holberton.h"
/**
* print_diagonal - main function that draws a diagonal line on the terminal.
* @n: integer.
* Return: A diagonal line.
*/
void print_diagonal(int n)
{
int i, j;

i = 0;
if (n > 0)
{
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
i++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
