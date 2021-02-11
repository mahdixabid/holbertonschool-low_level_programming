#include "holberton.h"
/**
*_isdigit - check for a digit between (0 nd 9).
*@c: integer.
*Return: either 0 or 1.
*/
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
return (1);
else
return (0);
}
