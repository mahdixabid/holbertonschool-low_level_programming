#include "holberton.h"
/**
* print_triangle -triangle.
* @size: integer.
* Return: Triangle
*/
void print_triangle(int size)
{
int i, j, h;

i = 0;
if (size > 0)
{
while (i < size)
{
h = size - i;
while (h > 1)
{
_putchar(' ');
h--;
}
j = 0;
while (j <= i)
{
_putchar('#');
j++;
}
i++;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
