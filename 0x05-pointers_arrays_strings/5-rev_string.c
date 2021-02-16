#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, x, k, v;

	while (s[i] != '\0')
	{
		i++;
	}

	v = i;
	i = 0;
	x = v - 1;

	while (i < x)
	{
		k = s[i];
		s[i] = s[x];
		s[x] = k;
		i++;
		x--;
	}

}
