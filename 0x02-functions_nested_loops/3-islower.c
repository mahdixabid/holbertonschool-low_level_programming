#include "holberton.h"

/**
 *_islower- lowercase
 *
 *@k : random letter
 *
 * Return: Always 0.
 */
void _islower(int k)
{
if (k >= 'a' && k <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
