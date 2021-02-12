#include "holberton.h"
/**
* print_diagonal -diagonal line.
* @n: integer.
* Return:line.
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
