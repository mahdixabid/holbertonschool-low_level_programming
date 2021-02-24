#include "holberton.h"
/**
 * factorial -given number
 * @n:argument
 *
 * Return: the factorial of a given number, -1 if lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
