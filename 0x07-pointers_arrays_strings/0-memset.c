#include "holberton.h"
/**
 * _memset - memory with a constant byte
 * @s:first constant byte
 * @b: second constant byte
 * @n: int
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
