#include "holberton.h"

char *_strcat(char *dest, char *src);

/**
 * argstostr - concatenates all the arguments
 * @av: the content
 * @ac: the size of the content
 *
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *new, *salt;
	int i, j, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0, k = 0 ; i < ac ; i++, k++)
		{
			for (j = 0 ; av[i][j] != '\0' ; j++, k++)
			{
				;
			}
		}
		new = malloc(sizeof(char) * (k + 1));
		salt = "\n";
		for (i = 0 ; i < ac ; i++)
		{
			new = _strcat(new, av[i]);
			if (new == NULL)
			{
				return (NULL);
			}
			if (i + 1 < ac)
			{
				new = _strcat(new, salt);
				if (new == NULL)
				{
					return (NULL);
				}
			}
		}

	}
	new = _strcat(new, salt);
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}

/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
