#include "holberton.h"
/**
*_isalpha- 0
*@c: integer
*Return: sometime 0 or 1
*/
int _isalpha(int c);
{
if ((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
