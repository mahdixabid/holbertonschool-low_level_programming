#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - create a string
 *@str:string
 *Return: 0
 */
char *_strdup(char *str)
{
	int i, len;
	char *p;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
			p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
