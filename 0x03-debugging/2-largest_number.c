#include "holberton.h"

/**
 * largest_number - returns the largest 3 numbers
 * @a: integer
 * @b: integer
 * @c: integer
 * Return: largest number

*/
int largest_number(int a, int b, int c)
{
  int largest;
  
if (a > b && a > c)
{
return (a);
}
else if (b > a && b > c)
{
return (b);
}
else if (c > a && c > b)
{
return (c);
}
