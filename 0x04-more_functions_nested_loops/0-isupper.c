#include "holberton.h"
/**
*_isupper -0
*@c: char
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
