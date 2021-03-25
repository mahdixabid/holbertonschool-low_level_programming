#include "holberton.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian of 1 if little endian
 */
int get_endianness(void)
{
unsigned int i = 1;
char *m = (char *)&i;

if (*m)
{
return (1);
}
else
{
return (0);
}
}

