#include "holberton.h"
/**
 * reverse_array - reverses
 * @a: array of integers
 * @n: number
 *
 */
void reverse_array(int *a, int n)
{
int i;
int j;
i = 0;
n = n - 1;
while (i < n)
{
j = a[i];
a[i] = a[n];
a[n] = j;
i++;
n--;
}
}
