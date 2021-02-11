#include "holberton.h"
/**
*print_numbers - print number from 0 to 9.
*@n: integer.
*Return:0.
*/
void print_numbers(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
