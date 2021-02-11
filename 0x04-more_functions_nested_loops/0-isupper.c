#include "holberton.h"
/**
*_isupper -0
*@c: an integer
*Return: either 0 or 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
