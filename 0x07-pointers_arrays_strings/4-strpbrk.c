#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: a pointer to the byte that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
