#include "holberton.h"
/**
*print_sign - 0
*@n: integer
*Return: either 0, 1 or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
