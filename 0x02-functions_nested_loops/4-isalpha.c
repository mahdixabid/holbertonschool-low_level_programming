#include "holberton.h"
/**
*_isalpha - 0
*@c: an integer
*Return: either 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

