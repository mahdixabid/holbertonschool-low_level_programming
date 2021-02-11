#include "holberton.h"
/**
* print_square -square.
* @size: size.
* Return;
*/
void print_square(int size)
	{
int i, j;

if (size > 0)
{
i = 0;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
	}
