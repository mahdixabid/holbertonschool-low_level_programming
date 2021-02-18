#include "holberton.h"
/**
 * _strncat - two strings
 * @dest: input of string 1
 * @src: input of string 2
 * @n: times
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != 0)
{
i++;
}
j = 0;
while (src[j] != 0 && j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
