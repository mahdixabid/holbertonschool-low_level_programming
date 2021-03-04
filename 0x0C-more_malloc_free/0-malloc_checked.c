#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - mallocs memory asked, exits with code 98 on failure
 * @b: var
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *p;
p  = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
