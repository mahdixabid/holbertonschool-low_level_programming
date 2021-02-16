#include "holberton.h"

/**
* swap_int -swapes two int
* @a: variable
* @b: variable
* Return: void
*/
void swap_int(int *a, int *b)
{
	int p;
p = *a;
*a = *b;
*b = p;
}
