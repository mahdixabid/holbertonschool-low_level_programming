#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its_pa
 * @n: number of pa
 *
 * Return: 0 if n is  0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0, number;

	va_list pa;

	va_start(pa, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0 ; i < n ; i++)
	{
		number = va_arg(pa, int);
		add = add + number;
	}
	va_end(pa);
	return (add);
}
