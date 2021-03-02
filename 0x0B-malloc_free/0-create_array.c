#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 *@size:unsigned int
 *@c:char
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(c));
	if (p == NULL)
		return (0);
	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}
	return (p);
}
