#include "holberton.h"
/**
*_islower- lowercase
*@c: integer
* Return: sometime 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
