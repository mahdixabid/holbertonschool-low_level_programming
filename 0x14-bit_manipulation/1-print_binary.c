#include "holberton.h"
/**
* print_binary - Prints the binary representation of a number.
* @n: Number to be converted.
*/
void print_binary(unsigned long int n)
{
	unsigned short count = 0;

	while (!(n & 0x8000000000000000) && count < 64)
	{
		count++;
		n <<= 1;
	}
	if (count == 64)
		_putchar('0');
	for (; count < 64; count++)
	{
		if (n & 0x8000000000000000)
			_putchar('1');
		else
			_putchar('0');
		n <<= 1;
	}
}
