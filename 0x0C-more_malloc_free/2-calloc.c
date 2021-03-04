#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: unsigned int.
* @size: unsigned int.
* Return: ch
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *ch;

	if (nmemb == 0 || size == 0)
	return (NULL);
		ch = malloc(nmemb * size);
	if (ch == NULL)
	return (NULL);
		while (i < nmemb * size)
		{
		ch[i] = 0;
		i++;
		}
	return (ch);
}
