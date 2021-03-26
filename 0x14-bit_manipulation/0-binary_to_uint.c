#include "holberton.h"
/**
 * binary_to_uint - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: the convertd number or 0 if b is NULL or different from 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
int l, i, add;

add = 0;

if (b != NULL)
	{
	for (l = 0 ; b[l] != '\0' ; l++)
	{
	if (b[l] != 48 && b[l] != 49)
	{
	return (0);
	}
	}
	for (i = 0, l-- ; l >= 0 ; l--)
	{
	add = add + ((b[l] - '0') << i);
	i++;
	}
	}
	else
	{
	return (0);
	}
	return (add);
}

